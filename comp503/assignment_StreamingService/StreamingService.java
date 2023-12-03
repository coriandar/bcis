package PartB;

import java.util.ArrayList;
import java.util.Collections;

public class StreamingService {
	private ArrayList<DigitalContent> digitalContent;
	
	/**
	 * Method: constructor
	 * --------------------------------------------------
	 * Initializes the instance variables of this class.
	 * */
	public StreamingService() {
		this.digitalContent = new ArrayList<DigitalContent>();
	}
	
	/**
	 * Method: toString
	 * --------------------------------------------------
	 * @return Content stored by StreamingService, sorted by title.
	 * */
	public String toString() {
		StringBuilder storedContent = new StringBuilder();
		
		for(DigitalContent item : this.digitalContent) {
			if(item instanceof Film) {
				storedContent.append("[F]" + " ");
			}
			else if(item instanceof Music) {
				storedContent.append("[M]" + " ");
			}
			storedContent.append(item + "\n");
		}
		return storedContent.toString();
	}
	
	/**
	 * Method: add
	 * --------------------------------------------------
	 * Adds digital content to ArrayList, checks for null. Uses Collections
	 * to sort content by title.
	 * 
	 * @param toAdd - digital content to be added to ArrayList.
	 * */
	public void add(DigitalContent toAdd) {
		if(toAdd != null) {
			this.digitalContent.add(toAdd);
			Collections.sort(this.digitalContent);
		}
	}
	
	/**
	 * Method: match
	 * --------------------------------------------------
	 * Invokes match on each DigitalContent object.
	 * 
	 * @param query - search key, not case sensitive.
	 * @return ArrayList of matching objects.
	 * */	
	public ArrayList<DigitalContent> match(String query) {
		ArrayList<DigitalContent> foundList = new ArrayList<DigitalContent>();

		for(DigitalContent item : digitalContent) {
			if(item.match(query)) {
				foundList.add(item);
			}
		}
		return foundList;
	}
}