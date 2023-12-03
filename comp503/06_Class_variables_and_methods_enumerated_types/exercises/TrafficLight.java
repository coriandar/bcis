package exercises;

public enum TrafficLight {
	RED("Stop") {
		public boolean stop() {
			return true;
		}
	},
	YELLOW("Slow Down") {
		public boolean stop() {
			return true;
		}
	},
	GREEN("GO!") {
		public boolean stop() {
			return false;
		}
	};
	
	private String suggestion;
	
	private TrafficLight(String sugg) {
		this.setSuggestion(sugg);
	}

	public String getSuggestion() {
		return suggestion;
	}

	public void setSuggestion(String suggestion) {
		this.suggestion = suggestion;
	}
	
	public boolean stop() {
		return false;
	}

	public String toString() {
		return this.name() + ": " + this.getSuggestion() + ". Stop? "+ this.stop();
	}
}
