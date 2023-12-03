package PartB;

public interface Play {
	public DigitalContent getCurrentStream();
	public void stream(String query);
	public void stop();
}