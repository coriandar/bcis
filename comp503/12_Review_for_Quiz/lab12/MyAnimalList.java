package lab12;

import java.util.ArrayList;

public class MyAnimalList {

	public static void main(String[] args)
	{
		ArrayList<Animal> cats = new ArrayList<Animal>();
		cats.add(new DomesticCat());
		cats.add(new DomesticCat());
		cats.add(new DomesticCat());
		cats.add(new Tiger());
		cats.add(new Tiger());
		cats.add(new Tiger());
		cats.add(new Tiger());
		
		for (Animal cat : cats) {
			if (cat instanceof DomesticCat) {
				System.out.println("DomesticCat:");
			}
			else if (cat instanceof Tiger) {
				System.out.println("Tiger:");
			}
			cat.soundsLike();
			System.out.println("");
		}
	}
}
