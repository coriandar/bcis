package exercises;

public class Student {
	private String firstName;
	private String lastName;
	private String studentID;
	
	public Student (String fName, String lName, String ID) {
		this.setFirstName(fName);
		this.setLastName(lName);
		this.setStudentID(ID);
	}
	
	public void setFirstName(String fName) {
		this.firstName = fName;
	}
	
	public void setLastName(String lName) {
		this.lastName = lName;
	}
	
	public void setStudentID(String studentID) {
		this.studentID = studentID;
	}
	
	public String getFirstName() {
		return this.firstName;
	}
	
	public String getLastName() {
		return this.lastName;
	}
	
	public String getStudentID() {
		return this.studentID;
	}
	
	public String toString() {
		return firstName+" "+lastName+" "+studentID;
	}
}