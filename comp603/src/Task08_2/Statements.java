package Task08_2;

public class Statements {
	private static String schema = "tty.";

	public static String createBook = 
			"CREATE  TABLE " + schema + "book ("
			+ "bookid  INT,"
			+ "title VARCHAR(50),"
			+ "category VARCHAR(20),"
			+ "price FLOAT)";

	public static String createPromo = 
			"CREATE  TABLE " + schema + "promotion ("
			+ "category VARCHAR(20),"
			+ "discount INT)";

	public static String createWeekSpecial = 
			"CREATE  TABLE " + schema + "WeekSpecial ("
			+ "title VARCHAR(50),"
			+ "SpecialPrice FLOAT)";

	// case-sensitive
	public static String insertPromo = 
			"INSERT INTO " + schema + "promotion "
			+ "VALUES ('Fiction', 0),"
			+ "('Non-fiction', 10),"
			+ "('Textbook', 30)";

	public static String insertBook = 
			"INSERT INTO " + schema + "book "
			+ "VALUES (1, 'Slum Dog Millionaire', 'Fiction', 19.90),"
			+ "(2, 'Run Mummy Run', 'Fiction', 28.00),"
			+ "(3, 'The Land of Painted Caves', 'Fiction', 15.40),"
			+ "(4, 'Cook with Jamie', 'Non-fiction', 55.20),"
			+ "(5, 'Far Eastern Odyssey', 'Non-fiction', 24.90),"
			+ "(6, 'Open', 'Non-fiction', 33.60),"
			+ "(7, 'Big Java', 'Textbook', 60.00),"
			+ "(8, 'Financial Accounting', 'Textbook', 24.80)";

	public static String getWeekSpecial =
			"SELECT title, price, discount "
			+ "FROM book,promotion "
			+ "WHERE LOWER(book.category)=LOWER(promotion.category)";

	public static String dropTable = "DROP TABLE " + schema;
}
