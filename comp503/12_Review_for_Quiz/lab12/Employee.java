package lab12;

import java.util.ArrayList;
import java.util.Collections;

public class Employee implements Comparable<Employee>{
	private String name;
	private Job job;
	
	public static void main(String[] args) {
		ArrayList<Employee> employeeList = new ArrayList<Employee>();
		employeeList.add(new Employee("Bob",Job.CHIEF));
		employeeList.add(new Employee("Linda",Job.FOREMAN));
		employeeList.add(new Employee("Ted",Job.MANAGER));
		employeeList.add(new Employee("Calvin",Job.WORKER));

		Collections.sort(employeeList);
		
		for (Employee e : employeeList) {
			System.out.println(e);
		}
	}
	
	/**
	 * Constructor
	 * */
	public Employee (String name, Job job) {
		setName(name);
		setJob(job);
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		return getName()+" ("+titleCase()+")"; 
	}
	
	/**
	 * Title case
	 * */
	public String titleCase() {
		String convert = getJob().name().substring(0,1);
		convert += 	getJob().name().substring(1).toLowerCase();
		return convert;
	}
	
	/**
	 * CompareTo
	 * */
	@Override
	public int compareTo(Employee o) {
		return this.getName().compareTo(o.getName());
	}
	
	/**
	 * GetSetMethods
	 * */
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Job getJob() {
		return job;
	}

	public void setJob(Job job) {
		this.job = job;
	}
}
