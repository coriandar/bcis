package Task08_2;

import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class BookStore {

    private final DBManager dbManager;
    private final Connection conn;
    private Statement statement;

    public BookStore() {
        dbManager = new DBManager();
        conn = dbManager.getConnection();
		connectBookStoreDB();
		createPromotionTable();
		createWeekSpecialTable(getWeekSpecial());
    }

    public void connectBookStoreDB() {
        //use the conn, initialize database by creating BOOK Table and insert records
		// Create new book table, inserts the same as the manual database
		try {
			this.statement = conn.createStatement();
			this.checkIfTableExists("BOOK");
			this.statement.addBatch(Statements.createBook);
			this.statement.addBatch(Statements.insertBook);
			this.statement.executeBatch();
		}
		catch (SQLException e) { 
			System.out.println(e.getMessage());
			System.out.println(e.getNextException().getMessage());
		}
    }

    public void createPromotionTable() {
		try {
			this.statement = conn.createStatement();
			this.checkIfTableExists("promotion");
			this.statement.addBatch(Statements.createPromo);
			this.statement.addBatch(Statements.insertPromo);
			this.statement.executeBatch();
		}
		catch (SQLException e) { System.out.println(e.getMessage()); }

    }

    public ResultSet getWeekSpecial() {
        ResultSet rs = null;
		try { rs = statement.executeQuery(Statements.getWeekSpecial); }
		catch (SQLException e) { System.out.println(e.getMessage()); }
//		if(rs != null) System.out.println("Success");
        return rs;
    }

    public void createWeekSpecialTable(ResultSet rs) {
        try {
			this.statement = conn.createStatement();
			this.checkIfTableExists("WeekSpecial");
			this.statement.addBatch(Statements.createWeekSpecial);
			this.statement.executeBatch();

			if (!rs.next()) System.out.println("Empty");
			else {
				do {
					String title = rs.getString("title");
					double price = rs.getFloat("price");
					double discount = rs.getInt("discount") / (double) 100;
					double specialPrice = price * (1 - discount);

					this.statement.addBatch(
							"INSERT INTO tty.WeekSpecial VALUES ('" + title + "',"+ specialPrice +")"
					);
					this.statement.executeBatch();
				} while(rs.next());
			}
            rs.close();
        }
		catch (SQLException e) { System.out.println(e.getMessage()); }
    }

	public void checkIfTableExists(String name) {
		try {
			// must check if table exists before being able to drop
			// get metadata of table
			DatabaseMetaData dbmd = this.conn.getMetaData();
			String[] type = {"TABLE"};
			statement = this.conn.createStatement();
			ResultSet rs = dbmd.getTables(null, null, null, type);

			while (rs.next()) {
				String table_name = rs.getString("TABLE_NAME");
//				System.out.println(table_name);
				// if table name exists in rs then drop the table
				if (table_name.equalsIgnoreCase(name)) {
					statement.executeUpdate(Statements.dropTable + name);
					System.out.println("Table " + name + " dropped");
					break;
				}
			}
			rs.close();
		}
		catch (SQLException e) { System.out.println(e.getMessage()); }
	}
}
