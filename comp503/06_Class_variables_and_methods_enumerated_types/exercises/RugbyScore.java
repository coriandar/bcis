package exercises;

public class RugbyScore {
	private String teamName;
	private int currentPoints;
	
	public RugbyScore(String teamName) {
		this.setTeamName(teamName);
		this.setCurrentPoints(0);
	}
	
	public String toString() {
		return this.getTeamName() + ": " + this.getCurrentPoints();
	}
	
	public void score(ScoreAction scoreType) {
		this.setCurrentPoints(this.getCurrentPoints() + scoreType.getScore());
	}
	
	public String getTeamName() {
		return teamName;
	}
	
	public void setTeamName(String teamName) {
		this.teamName = teamName;
	}
	
	public int getCurrentPoints() {
		return currentPoints;
	}
	
	public void setCurrentPoints(int currentPoints) {
		this.currentPoints = currentPoints;
	}
}
