package PartB;

public class Music extends DigitalContent {
	private String artistName;

	/**
	 * Method: constructor
	 * --------------------------------------------------
	 * Initializes the instance variables of super and this class,
	 * must supply  input parameters for all instance variables.
	 * */
	public Music(String title, String releaseDate, String publisher, String artistName) {
		super(title, releaseDate, publisher);
		setArtistName(artistName);
	}
		
	/**
	 * Method: toString
	 * --------------------------------------------------
	 * @return describes the music content, calls super.
	 * */
	@Override
	public String toString() {
		return super.toString() +" | Artist: "+getArtistName();
	}
	
	/**
	 * Method: match
	 * --------------------------------------------------
	 * Check if search key is contained in the title or
	 * publisher or release date, artist name, invokes super.
	 * 
	 * @param query - search key, not case sensitive.
	 * @return boolean value.
	 * */
	@Override
	public boolean match(String query) {
		return super.match(query) || this.getArtistName().toUpperCase().contains(query.toUpperCase());
	}
	
	/**
	 * Method: getSetMethods
	 * --------------------------------------------------
	 * */
	public String getArtistName() {
		return artistName;
	}

	public void setArtistName(String artistName) {
		this.artistName = artistName;
	}
}
