package Task04_1;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import java.util.HashMap;

public class FileHandler {

	public static HashMap<String, Integer> popRecords(String path) throws IOException {
		List<String> entry = Files.readAllLines(Paths.get(path));
		HashMap<String, Integer> userList = new HashMap<>();
		for (String e : entry) {
			String[] split = e.split(" ");
			userList.put(split[0], Integer.parseInt(split[1]));
		}
		return userList;
	}

	public static User setUser(HashMap<String, Integer> userList, String user) {
		if (userList.containsKey(user)) {
			System.out.println(user + " exists!");
			return new User(user, userList.get(user));
		}
		System.out.println("New user created");
		return new User(user);
	}

	public static void updateUserList(File file, String toPrint) throws IOException {
		FileWriter printFile = new FileWriter(file);
		printFile.write(toPrint);
		System.out.println("Score saved");
		printFile.close();
	}
}
