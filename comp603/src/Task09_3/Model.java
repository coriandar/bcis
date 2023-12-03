package Task09_3;

import java.sql.*;
import java.util.Observable;

public class Model extends Observable {
    Connection conn = null;
    String url = "jdbc:derby:PlayerDB;create=true";  //url of the DB host

    String dbusername = "pdc";  //your DB username
    String dbpassword = "pdc";   //your DB password

    public String username = null;
    public String password = null;
    public int score = 0;
    public int num1 = 0;
    public int num2 = 0;
    public int answer = 0;
	public String userAnswer;

    public Model() {
        this.dbsetup();
    }

    public void newQuestion() {
        //model generates question
        num1 = (int) Math.floor(Math.random() * 10);
        num2 = (int) Math.floor(Math.random() * 10);
        answer = num1 + num2;
    }

	public void checkAnswer() {
		if (userAnswer.compareTo(answer + "") == 0) score += 10;
		else score -= 10;
		setChanged();
		notifyObservers(score);
	}

	public boolean checkUser() {
		if (username != null && password != null && checkName()) return true;
		return false;
	}

    void quitGame() {
        Statement statement;
        try {
            statement = conn.createStatement();
            statement.executeUpdate("UPDATE UserInfo SET score=" + score + " WHERE userid='" + username + "'");

            // view stuff, pass i =n values from controller
            System.out.println(username + score);
        }
        catch (SQLException ex) { System.out.println(ex.getMessage()); }
    }

    /**
     * Checks if user name exist, fully backend
     */
    public boolean checkName() {
        boolean userCheck = false;
        try {
            Statement statement = conn.createStatement();
            ResultSet rs = statement.executeQuery("SELECT userid, password, score FROM UserInfo WHERE userid = '" + username + "'");

            if (rs.next()) {
                String pass = rs.getString("password");
                System.out.println("***" + pass);
                System.out.println("found user");

                if (password.compareTo(pass) == 0) {
                    score = rs.getInt("score");
                    userCheck = true;
					System.out.println(username +": " + score);
                }
                else userCheck = false;
            }
            else {
                System.out.println("no such user");
                statement.executeUpdate("INSERT INTO UserInfo  VALUES('" + username + "', '" + password + "', 0)");
                userCheck = true;
            }
        }
        catch (SQLException ex) { System.out.println(ex.getMessage()); }
        return userCheck;
    }
    
    /**
     * Sets up database, fully backend
     */
    public void dbsetup() {
        try {
            conn = DriverManager.getConnection(url, dbusername, dbpassword);
            Statement statement = conn.createStatement();
            String tableName = "UserInfo";

            if (!checkTableExisting(tableName)) {
                statement.executeUpdate("CREATE TABLE " + tableName + " (userid VARCHAR(12), password VARCHAR(12), score INT)");
            }
            statement.close();

        }
        catch (Throwable e) { System.out.println("error"); }
    }

    /**
     * Checks if the tables exists, fully backend
     */
    private boolean checkTableExisting(String newTableName) {
        boolean flag = false;
        try {

            System.out.println("check existing tables.... ");
            String[] types = {"TABLE"};
            DatabaseMetaData dbmd = conn.getMetaData();
            ResultSet rsDBMeta = dbmd.getTables(null, null, null, null);//types);
            while (rsDBMeta.next()) {
                String tableName = rsDBMeta.getString("TABLE_NAME");
                if (tableName.compareToIgnoreCase(newTableName) == 0) {
                    System.out.println(tableName + "  is there");
                    flag = true;
                }
            }
            if (rsDBMeta != null) rsDBMeta.close();
        }
        catch (SQLException ex) { }
        return flag;
    }
}
