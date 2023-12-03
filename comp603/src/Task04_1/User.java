package Task04_1;

public class User {
	private String username;
	private int score;

	public User(String username) {
		setUsername(username);
		setScore(0);
	}

	public User(String username, int score) {
		this(username);
		setScore(score);
	}

	public String printScore() {
		return "user: " + getUsername() + " | score: " + getScore();
	}

	public void updateScore(int sessionScore) {
		this.score += sessionScore;
	}

	/**
	 * Method:getterSetter
	 */
	public void setUsername(String username) { this.username = username; }
	public void setScore(int score) { this.score = score; }
	public String getUsername() { return username; }
	public int getScore() { return score; }
}
