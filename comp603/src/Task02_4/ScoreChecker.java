package Task02_4;

import java.io.File;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Scanner;

public class ScoreChecker {

	private File file;
	private HashMap<String, Integer> map;

	/**
	 * constructor
	 */
	public ScoreChecker(File file) {
		this.file = file;
		this.map = new HashMap<>();
	}

	public static void main(String[] args) {
		ScoreChecker test = new ScoreChecker(new File("./resources/T02_scores.txt"));
		test.loadScores();
		Scanner scan = new Scanner(System.in);

		while (true) {
			System.out.println("[ScoreDB]");
			System.out.println("1. View all");
			System.out.println("2. Check exisiting");
			System.out.println("3. Exit");

			char input = test.parseInput(scan.next().charAt(0));

			if (input == '1') {
				test.viewRecord();
				System.out.println("");
			} else if (input == '2') {
				scan.nextLine();
				test.checkScore(scan);
				System.out.println("");
			} else if (input == 'x' || input == '3') {
				break;
			}
		}
		scan.close();
		System.exit(0);// strongest way close program, not common
	}

	public void checkScore(Scanner scan) {
		System.out.println("Name: Score");
		String[] kv = scan.nextLine().split(": ");
		String name = kv[0];
		Integer score = Integer.parseInt(kv[1]);

		if (this.getMap().containsKey(kv[0])) {
			System.out.println(name + ", found! But score is different.");
			overwriteScore(scan, name, score);
		} else if (this.getMap().get(name) == score) {
			System.out.println(name + ": " + score + ", found!");
			overwriteScore(scan, name);
		} else {
			this.getMap().put(name, score);
			System.out.println("Not found. " + name + ": " + score + ", added.");
		}
	}

	public void overwriteScore(Scanner scan, String name) {
		System.out.println("Overwrite?");
		char input = parseInput(scan.next().charAt(0));
		if (input == 'y') {
			System.out.print("New score? ");
			Integer newScore = Integer.parseInt(scan.next());
			this.getMap().put(name, newScore);
			System.out.println(name + "'s score updated to: " + newScore);
		}
	}

	public void overwriteScore(Scanner scan, String name, Integer newScore) {
		System.out.println("Overwrite?");
		char input = parseInput(scan.next().charAt(0));
		if (input == 'y') {
			this.getMap().put(name, newScore);
			System.out.println(name + "'s score updated to: " + newScore);
		}
	}

	public char parseInput(char input) {
		if (input == 'y' || input == 'Y') {
			return 'y';
		} else if (input == 'n' || input == 'N') {
			return 'n';
		} else if (input == 'x' || input == 'X') {
			return 'x';
		}
		return input;
	}

	public void loadScores() {
		try {
			BufferedReader buffer = new BufferedReader(new FileReader(this.getFile()));
			String line;
			while ((line = buffer.readLine()) != null) {
				String[] kv = line.split(" ");
				this.getMap().put(kv[0], Integer.parseInt(kv[1]));
			}
			buffer.close();
		} catch (FileNotFoundException ex) {
			System.out.println("Error:" + ex);
		} catch (IOException ex) {
			System.out.println("Error:" + ex);
		}
	}

	public void viewRecord() {
		for (HashMap.Entry<String, Integer> e : this.getMap().entrySet()) {
			System.out.println(e.getKey() + ": " + e.getValue());
		}
	}

	/**
	 * getSetMethods
	 */
	public File getFile() {
		return this.file;
	}

	public void setFile(File file) {
		this.file = file;
	}

	public HashMap<String, Integer> getMap() {
		return this.map;
	}
}
