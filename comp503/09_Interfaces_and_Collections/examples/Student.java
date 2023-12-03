package examples;

public class Student extends Person{
	
	public String toString(){
		return super.toString()+" student id: "+this.getStudentID();
	}
	
	public Student(String name, String address,String codes,String id) {
		super(name, address);
		
		this.setPaperCodes(codes);
		this.setStudentID(id);		
	}
	
	private String paperCodes;
	private String studentID;
	public String getPaperCodes() {
		return paperCodes;
	}
	public void setPaperCodes(String paperCodes) {
		this.paperCodes = paperCodes;
	}
	public String getStudentID() {
		return studentID;
	}
	public void setStudentID(String studentID) {
		this.studentID = studentID;
	}
}