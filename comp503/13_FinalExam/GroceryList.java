package finalExam;

import java.util.ArrayList;

public class GroceryList {
	private ArrayList<String> foodProducts;
	
	public static void main(String[] args)
	{
		GroceryList basket1 = new GroceryList();
		basket1.add("Apple");
		basket1.add("Banana");
		basket1.add("Orange");
		basket1.add("Pineapple");
		System.out.println("Basket1:\n" + basket1);
		System.out.println("Removed index[3]: " + basket1.remove(3));
		System.out.println("Removed index[5]: " + basket1.remove(5) + "\n");

		GroceryList basket2 = new GroceryList();
		basket2.add("Chocolate");
		basket2.add("Chips");
		basket2.add("Coke");

		System.out.println("Basket1:\n" + basket1);
		System.out.println("Basket2:\n" + basket2);

		GroceryList combined = basket1.combine(basket2);
		System.out.println("Combined:\n" + combined);
	}
	
	/**
	 * constructor
	 * */
	public GroceryList() {
		this.foodProducts = new ArrayList<>();
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		StringBuilder output = new StringBuilder();
		
		for (String food : foodProducts) {
			output.append(food + "\n");
		}
		
		return output.toString();
	}
	
	/**
	 * methods
	 * */
	public void add(String food) {
		if (!food.isEmpty()) {
			this.foodProducts.add(food);
		}
	}
	
	public boolean remove(int index) {
		if (0 <= index && index <= foodProducts.size()) {
			foodProducts.remove(index);
			return true;
		}
		return false;
	}
	
	public GroceryList combine(GroceryList other) {
		GroceryList combined = new GroceryList();
		
		for (int i = 0; i < this.foodProducts.size(); i++) {
			combined.add(foodProducts.get(i));
		}
		
		//no get set methods as stated in brief
		String[] otherList = other.toString().split("\n");
		
		for (int i = 0; i < otherList.length; i++) {
			combined.add(otherList[i]);
		}
		
		return combined;
	}
}

/**
Question: The Grocery List (23 marks)
	1. Private instance variable ArrayList<String>, where string stores the name of a food product.
	
	2. Constructor to initialize ArrayList.
	
	3. toString() method to display all food in the list.
	
	4. No get or set methods.
	
	5. void add(String food) method. if the input is not null then add to the list, otherwise, do not modify.
	
	6. boolean remove(int index). If the index is found in the list remove, and return true, else return false.
	
	7. GroceryList combine(GroceryList other) method. Output a new GroceryList that is the combination of this and other.
	
	8. static void main. Create 2 GroceryLists, 3 items each. Demonstrate functionality of mehtod.
*/
