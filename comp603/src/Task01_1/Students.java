package Task01_1;

public class Students {

	private String name;
	private int age;

	public Students(String name, int age) {
		this.name = name;
		this.age = age;
	}

	/**
	 * getSetMethods
	 */
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}
}
