package PartB;

public abstract class DigitalContent implements Comparable<DigitalContent> {
	private String title;
	private String releaseDate;
	private String publisher;

	/**
	 * Method: constructor
	 * --------------------------------------------------
	 * Initializes the instance variables, must supply 
	 * input parameters for all three instance variables.
	 * */
	public DigitalContent(String title, String publisher, String releaseDate) {
		setTitle(title);
		setReleaseDate(releaseDate);
		setPublisher(publisher);
	}
	
	/**
	 * Method: toString
	 * --------------------------------------------------
	 * @return describes the digital content.
	 * */
	public String toString() {
		return getTitle() +" | "+ getReleaseDate() +" | "+ getPublisher();
	}
	
	/**
	 * Method: match
	 * --------------------------------------------------
	 * Check if search key is contained in the title or
	 * publisher or release date.
	 *
	 * @param query - search key, not case sensitive.
	 * @return boolean value.
	 * */
	public boolean match(String query) {
		return this.toString().toUpperCase().contains(query.toUpperCase());
	}
	
	/**
	 * Method: compareTo
	 * --------------------------------------------------
	 * Implementation of Comparable interface to compare titles.
	 *
	 * @param o - object to compare.
	 * @return 0 if equal, < 0 lexicographically less,
	 * > 0 lexicographically greater
	 * */
	public int compareTo(DigitalContent o) {
		return this.getTitle().compareTo(o.getTitle());
	}
	
	/**
	 * Method: getSetMethods
	 * --------------------------------------------------
	 * */
	public String getTitle() {
		return title;
	}
	
	public void setTitle(String title) {
		this.title = title;
	}

	public String getPublisher() {
		return publisher;
	}

	public void setPublisher(String publisher) {
		this.publisher = publisher;
	}

	public String getReleaseDate() {
		return releaseDate;
	}

	public void setReleaseDate(String releaseDate) {
		this.releaseDate = releaseDate;
	}
}
