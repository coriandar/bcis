package Task02_3;

import Task02_2.Task02_2;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Task02_3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer> records = readRecords();
        String name = "";
        Integer score = 0;
        while (true) {
            System.out.println(records);
            System.out.print("Please input a student name:");
            name = checkInput(sc, records);
            boolean isValid = false;
            while (!isValid) {
                // Ensure that the input is an integer.
                try {
                    System.out.print("Please input a score:");
                    //Parse the input to an Integer.
                    score = Integer.parseInt(checkInput(sc, records));
                    isValid = true;
                } catch (NumberFormatException e) {
                    System.out.println("Invalid input.");
                }
            }
            //check if this is an existing record
            if (records.containsKey(name)) {
                System.out.println("The record of " + name + " is existing. Do you want to overwrite it? Enter 'Y' for overwritting.");
                if (checkInput(sc, records).trim().equalsIgnoreCase("Y")) {
                    records.put(name, score);
                }
            } else {
                records.put(name, score);
                System.out.println("New record added.");
            }
        }
    }

    /**
     * Read records from scores.txt.
     *
     * @return list
     */
    public static HashMap<String, Integer> readRecords() {
        // A hashmap for storing <name, score> pairs, where name is the key, and score is the value.
        HashMap<String, Integer> list = new HashMap();
        BufferedReader br = null;
        try {
            // Initialize the BufferedReader, which is used to read contents from scores.txt.
            br = new BufferedReader(new FileReader("./resources/T02_scores.txt"));
            String line = null;
            while ((line = br.readLine()) != null) {
                // Split the content of a line by using a white space. E.g., if the content is 'Tom 103', it returns ['Tom','103'].
                String str[] = line.split(" ");
                // Put the pair to the hashmap.
                list.put(str[0], Integer.parseInt(str[1]));
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            if (br != null) {
                try {
                    br.close();
                } catch (IOException ex) {
                    Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }
        return list;
    }

    /**
     * Write records to scores.txt.
     *
     * @param records
     */
    public static void writeToFile(HashMap<String, Integer> records) {
        PrintWriter pw = null;
        try {
            pw = new PrintWriter("scores.txt");
            // Iterate all key-value pairs of records, and write them to scores.txt.
            for (Map.Entry<String, Integer> entry : records.entrySet()) {
                pw.println(entry.getKey() + " " + entry.getValue());
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Task02_3.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            if (pw != null) {
                pw.close();
            }
        }
    }

    /**
     * If the input is 'X' or 'x', then save the records to file, and terminate
     * the program.
     *
     * @param sc
     * @param records
     * @return input
     */
    public static String checkInput(Scanner sc, HashMap<String, Integer> records) {
        String input = sc.nextLine();
        if (input.trim().equalsIgnoreCase("x")) {
            writeToFile(records);
            System.out.println("Records saved.");
            System.exit(0);
        }
        return input;
    }
}
