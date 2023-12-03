package lab12;

public class Tiger extends Feline {
	public void soundsLike() {
		super.soundsLike();
		System.out.println("Grrrrrr");
		System.out.println(this.getWeight());
	}
}
