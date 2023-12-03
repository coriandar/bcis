package exercises;

public class Person {
	private String name;
	private Role role;
	
	public Person(String name, Role role) {
		this.setName(name);
		this.setRole(role);
	}
	
	public boolean equals(Person compare) {
		return this.getRole() == compare.getRole();
	}
	
	public String toString() {
		return this.getName() + ": " + this.getRole();
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Role getRole() {
		return role;
	}

	public void setRole(Role role) {
		this.role = role;
	}
}
