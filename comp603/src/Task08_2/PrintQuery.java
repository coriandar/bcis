package Task08_2;

import java.sql.ResultSet;
import java.sql.SQLException;

public class PrintQuery {
	public static void printSpecialQueryResult(ResultSet rs) {
		try {
			if (!rs.next()) System.out.println("No results");
			else {
				do {
					System.out.print(rs.getString("title") + " | ");
					System.out.print(rs.getFloat("price") + " | ");
					System.out.println(rs.getInt("discount"));
				} while(rs.next());
			}
			rs.close();
		}
		catch (SQLException e) { System.out.println(e.getMessage()); }
	}

	public static void printPromoQueryResult(ResultSet rs) {
		try {
			if (!rs.next()) System.out.println("No results");
			else {
				do {
					System.out.print(rs.getString("category") + " | ");
					System.out.println(rs.getInt("discount"));
				} while(rs.next());
			}
			rs.close();
		}
		catch (SQLException e) { System.out.println(e.getMessage()); }
	}

	public static void printBookQueryResult(ResultSet rs) {
		try {
			// rs.next() in if statement gets the next one
			// so do while will print result of .next()
			if (!rs.next()) System.out.println("No results");
			else {
				do {
					System.out.print(rs.getInt("BOOKID") + " | ");
					System.out.print(rs.getString("TITLE") + " | ");
					System.out.print(rs.getString("CATEGORY") + " | ");
					System.out.println("$" + rs.getFloat("PRICE"));
				} while(rs.next());
			}
			rs.close();
		}
		catch (SQLException e) { System.out.println(e.getMessage()); }
	}
}
