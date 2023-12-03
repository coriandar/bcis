package Task02_3;

import java.io.*;
import java.util.Scanner;

public class Decode
{
	private File file;
	public Decode(File file) { this.file = file; }
	public File getFile() { return this.file; }

	public static void main(String[] args) throws IOException 
	{
		//refactor with Try, catch

//		Decode test = new Decode(new File("./resources/T02_input.txt"));
		Decode test = new Decode(new File("./resources/T02_scores.txt"));
		test.fileReader();
		test.inputStreamReader();
//		String three = test.scannerReader();

//		File outputFile = new File("./resources/T02_output.txt");
//		test.fileWriter(outputFile, three);
	}

	public void fileWriter(File file, String toPrint) throws IOException {
		FileWriter printFile = new FileWriter(file);
		printFile.write(toPrint);
		System.out.println("File outputted");
		printFile.close();
	}

	public void inputStreamReader() throws FileNotFoundException, IOException {
		/** InputStreamReader can be used with any input stream,
		 * allows specify character encoding used by input stream
		 */
		InputStreamReader in = new InputStreamReader(new FileInputStream(this.getFile()));
		BufferedReader buffer = new BufferedReader(in);
		String line = null;
		// add true to append
		PrintWriter toFile = new PrintWriter(new FileOutputStream("./resources/out.txt", true));
		while((line = buffer.readLine()) != null) {
			toFile.println(parseChar(line));
		}
		toFile.close();
		buffer.close();
	}

	public String scannerReader() throws FileNotFoundException {
		/**
		 * Scanner does parsing if input data and BufferedReader simply reads
		 * a sequence of characters
		 */
		Scanner scan = new Scanner(this.getFile());
		StringBuilder output = new StringBuilder();
		while(scan.hasNextLine()) {
			output.append(parseChar(scan.nextLine()) + "\n");
		}
		return output.toString();
	}

	public void fileReader() throws FileNotFoundException, IOException {
		/** FileReader: convenience class, extends InputStreamReader,
		 * optimized for reading characters from files.
		 */
		FileReader in = new FileReader(this.getFile());
		BufferedReader buffer = new BufferedReader(in);
		String line = null;
		BufferedWriter toFile = new BufferedWriter(new FileWriter("./resources/out2.txt"));
		while((line = buffer.readLine()) != null) {
			System.out.println(parseChar(line));
			toFile.write(parseChar(line) + "\n");
		}
		buffer.close();
		toFile.close();
	}

	public String parseChar(String input) {
		StringBuilder output = new StringBuilder();
		char[] chArray = input.toCharArray();
		for (int i = input.length() - 1; i >= 0; i--) {
			// does not detect case
//			if(Character.isLetter(chArray[i])) {
//				output.append(chArray[i]);
//			}
			if(String.valueOf(chArray[i]).matches("[a-z]")) {
				output.append((char)(chArray[i] - 32));
			}
			if(String.valueOf(chArray[i]).matches("[A-Z]")) {
				output.append(chArray[i]);
			}
		}
		return output.toString();
	}
}
