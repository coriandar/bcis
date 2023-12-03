package examples;

public class Lecturer extends Person{

	private String notes;
	
	public String toString(){
		return super.toString()+" is a lecturer";
	}
	
	
	public Lecturer(String name, String address,String notes) {
		super(name, address);
		
		this.setNotes(notes);
	}


	public String getNotes() {
		return notes;
	}

	public void setNotes(String notes) {
		this.notes = notes;
	}

}
