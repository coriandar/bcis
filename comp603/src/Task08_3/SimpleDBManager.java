/*
 * The programs are designed for PDC paper
 */
package Task08_3;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public final class SimpleDBManager {

    /**
     * If you try to connect the database on the server, you must start the
     * server first. Meanwhile, you need to import 'derbyclient.jar' to the
     * libraries.
     */
    //    private static final String URL = "jdbc:derby://localhost:1527/BookStoreDB";
    /**
     * If you try to connect the database embedded in the project, you must stop
     * the server first. Meanwhile, you need to import 'derby.jar' to the
     * libraries.
     */
    private static final String USER_NAME = "pdc"; //your DB username
    private static final String PASSWORD = "pdc"; //your DB password
    private static final String URL = "jdbc:derby:BookStoreDB_Ebd; create=true";  //url of the DB host

    Connection conn;

    public SimpleDBManager() {
        establishConnection();
    }

    public static void main(String[] args) {
        SimpleDBManager dbManager = new SimpleDBManager();
        System.out.println(dbManager.getConnection());
    }

    public Connection getConnection() {
        return this.conn;
    }

    //Establish connection
    public void establishConnection() {
        if (this.conn == null) {
            try {
                conn = DriverManager.getConnection(URL, USER_NAME, PASSWORD);
                System.out.println(URL + " Get Connected Successfully ....");
            }
			catch (SQLException ex) { System.out.println(ex.getMessage()); }
        }
    }

    public void closeConnections() {
        if (conn != null) {
            try { conn.close(); }
			catch (SQLException ex) { System.out.println(ex.getMessage()); }
        }
    }
}
