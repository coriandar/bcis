package Task08_3;

import Task08_2.Statements;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;

public class SimpleBookStore {

    SimpleDBManager dbManager;
    Connection conn;
    Statement statement;

    public SimpleBookStore() {
        dbManager = new SimpleDBManager();
        conn = dbManager.getConnection();
        try { statement = conn.createStatement(); }
		catch (SQLException ex) { System.out.println(ex.getMessage()); }
    }

    public static void main(String[] args) {
        SimpleBookStore sbs = new SimpleBookStore();
        try {
			sbs.statement.addBatch(Statements.createBook);
			sbs.statement.addBatch(Statements.insertBook);
            sbs.statement.executeBatch();
        }
		catch (SQLException ex) { System.out.println(ex.getMessage()); }
        sbs.closeConnection();
    }

    public void closeConnection() {
        this.dbManager.closeConnections();
    }
}
