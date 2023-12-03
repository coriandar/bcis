package exercises;

public enum ScoreAction {
	TRY(5),
	CONVERSION(7),
	PENALTYKICK(3),
	DROPGOAL(3);
	
	private int score;
	
	private ScoreAction(int score) {
		this.setScore(score);
	}
	
	public int getScore() {
		return score;
	}

	public void setScore(int score) {
		this.score = score;
	}
}
