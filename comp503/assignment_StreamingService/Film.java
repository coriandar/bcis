package PartB;

public class Film extends DigitalContent {
	private String castMembers;

	/**
	 * Method: constructor
	 * --------------------------------------------------
	 * Initializes the instance variables of super and this class,
	 * must supply  input parameters for all instance variables.
	 * */
	public Film(String title, String releaseDate, String publisher, String castMembers) {
		super(title, releaseDate, publisher);
		setCastMembers(castMembers);
	}
	
	/**
	 * Method: toString
	 * --------------------------------------------------
	 * @return describes the film content, calls super.
	 * */
	@Override
	public String toString() {
		return super.toString() +" | Cast: "+getCastMembers();
	}
	
	/**
	 * Method: match
	 * --------------------------------------------------
	 * Check if search key is contained in the title or
	 * publisher or release date, cast members, invokes super.
	 *
	 * @param query - search key, not case sensitive.
	 * @return boolean value.
	 * */
	@Override
	public boolean match(String query) {
		return super.match(query) || this.getCastMembers().toUpperCase().contains(query.toUpperCase());
	}
	
	/**
	 * Method: getSetMethods
	 * --------------------------------------------------
	 * */
	public String getCastMembers() {
		return castMembers;
	}

	public void setCastMembers(String castMembers) {
		this.castMembers = castMembers;
	}
}
