package Task09_2;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class Log {

    BufferedWriter bufWriter;
    public static int instanceNumber = 0;
    private static Log logger;

    private Log() {
    }
        
    public synchronized void writeLog(String str) {
        try {
            this.bufWriter = new BufferedWriter(new FileWriter("./resources/T09_log.txt", true));
            System.out.println("writting log");
            bufWriter.write(str);
            bufWriter.flush();
        }
        catch (IOException e) {}
//        instanceNumber++;
        System.out.println("A log instance has been created");
    }
    
    public static Log getLog() {
		if (logger == null) {
			logger = new Log();
			instanceNumber++;
		}
		return logger;
    }
    
    @Override
    public Object clone() throws CloneNotSupportedException {
        throw new CloneNotSupportedException();
    }
}
