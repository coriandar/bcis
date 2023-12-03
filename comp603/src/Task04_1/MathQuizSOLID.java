package Task04_1;

import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MathQuizSOLID {

	private File file;
	private User username;
	private int sessionScore;
	private int numQ;
	public HashMap<String, Integer> userList = new HashMap<>();

	public static void main(String[] args) throws IOException {
		Scanner scan = new Scanner(System.in);
		String path = "resources/T04_users.txt";
		MathQuizSOLID session = new MathQuizSOLID(2, path);

		System.out.println("Enter username: ");
		String user = scan.nextLine();
		session.loadUser(path, user);
		session.printUserInfo();

		Game quiz = new Game(session.getNumQ());

		do {
			if(quiz.stackIsEmpty()) {
				session.updateSessionScore(quiz.getGameScore());
				if (!session.newRound(scan)) {
					break;
				}
				quiz = new Game(session.getNumQ());
			}
			quiz.start(scan);
		}
		while (true);

		System.out.println("Session score: " + session.getSessionScore());
		session.updateUserScore();
		System.out.println(session.printUserList());
		FileHandler.updateUserList(session.file, session.printUserList());
	}

	public MathQuizSOLID(int numQ, String path) {
		this.numQ = numQ;
		this.file = new File(path);
	}
	
	public int getNumQ() {
		 return this.numQ;
	}

	public String printUserList() {
		StringBuilder output = new StringBuilder();
		for (Map.Entry<String, Integer> e : userList.entrySet()) {
			output.append(e.getKey() + " " + e.getValue() + "\n");
		}
		return output.toString();
	}

	public void printUserInfo() {
		System.out.println(this.username.printScore());
	}

	public void updateUserScore() {
		this.username.updateScore(this.sessionScore);
		this.userList.put(username.getUsername(), username.getScore());
	}

	public void loadUser(String path, String user) throws IOException {
		this.userList = FileHandler.popRecords(path);
		this.username = FileHandler.setUser(this.userList, user);
	}

	public void updateSessionScore(int gameScore) {
		this.sessionScore += gameScore;
	}

	public int getSessionScore() {
		return sessionScore;	
	}
	public boolean newRound(Scanner scan) {
		System.out.println("Another round? ");
		String input = scan.nextLine();
		if (input.equalsIgnoreCase("yes")) return true;
		return false;
	}
}
