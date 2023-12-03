package exercises;

public class BoxTest {
	
	public static void main(String[] args) {
		Box box0 = new Box(50,50,50);
		Box box1 = new Box(30,30,30);
		Box box2 = new Box(20,20,20);
		
		System.out.println(box0.fits(box1, box2));
	}
}
