package Task02_2;

import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Task02_2 {

    public static void main(String[] args) {
        BufferedReader br = null;
        PrintWriter pw = null;
        try {
            //Initialize BufferedReader and PrintWriter.
            br = new BufferedReader(new FileReader("./resources/T02_input.txt"));
            pw = new PrintWriter("./resources/T02_output.txt");
            String line = null;
            while ((line = br.readLine()) != null) {
                String str = "";
                // Iterate each character of a line from the last one to the first one. 
                for (int i = line.length() - 1; i >= 0; i--) {
                    // Identify whether the character is an alphabet or not.
                    if (Character.isAlphabetic(line.charAt(i))) {
                        // Convert the character to uppercase, and add it to the str.
                        str += Character.toUpperCase(line.charAt(i));
                    }
                }
                pw.println(str); // Write str to the output.txt.
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            // Close BufferedReader and PrintWriter at last.
            if (pw != null) {
                pw.close();
            }
            if (br != null) {
                try {
                    br.close();
                } catch (IOException ex) {
                    Logger.getLogger(Task02_2.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        }

    }
}
