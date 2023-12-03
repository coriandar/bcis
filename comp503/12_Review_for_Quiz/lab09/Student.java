package lab09;

public class Student {
	private String name;
	private String ID;

	public Student(String name, String ID) {
		this.name = name;
		this.ID = ID;
	}
	
	public String toString() {
		return this.name + " " + this.ID;
	}
	
	public boolean isEqual(Student student) {
		return this.ID.equals(student.getID());
	}
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getID() {
		return ID;
	}
	public void setID(String iD) {
		ID = iD;
	}
}
