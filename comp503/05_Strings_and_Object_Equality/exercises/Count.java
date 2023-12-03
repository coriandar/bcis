package exercises;

public class Count {
	private String value;

	public Count()
	{
		setValue("");
	}
	
	public String toString() {
		return String.valueOf(getValue().length());
	}
	
	public void succ() {
		setValue(getValue() + "S");
	}
	
	public void pred() {
		StringBuilder predString = new StringBuilder(getValue());
		predString.deleteCharAt(getValue().length() - 1);
		setValue(predString.toString());
	}
	
	public void add(Count add) {
		this.setValue(this.getValue() + add.getValue());
	}
	
	public void subtract(Count subtract) {
		int value = Integer.valueOf(subtract.toString());
		value--;
		
		this.setValue(getValue().substring(0, value));
	}
	
	public String getValue()
	{
		return value;
	}

	public void setValue(String value)
	{
		this.value = value;
	}
}
