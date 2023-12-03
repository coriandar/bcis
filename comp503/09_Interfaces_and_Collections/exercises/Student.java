package exercises;

public class Student {
	private String name;
	private String ID;
	
	public Student(String name, String ID) {
		setName(name);
		setID(ID);
	}
	
	public String toString() {
		return this.name + " " + this.ID;
	}
	
	public boolean isEqual(Student other) {
		return this.ID.equals(other.getID());
	}
	
	/**
	 * getSetMethods
	 * */
	public String getName() {
		return this.name;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getID() {
		return this.ID;
	}
	
	public void setID(String ID) {
		this.ID = ID;
	}
}
