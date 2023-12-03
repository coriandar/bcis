package lab12;

import java.util.ArrayList;

public class FruitListModel {

	private ArrayList<String> fruits;

	public FruitListModel(){
		this.fruits = new ArrayList<String>();
	}


	public void removeFruit(int index)
	{
		if((index >= 0)&(index < this.fruits.size()))
		{
			this.fruits.remove(index);
		}
	}

	public void addFruit(String fruitName) {
		this.fruits.add(fruitName);

	}

	public String[] toList() {

		String[] pArray = new String[this.fruits.size()];

		for(int i=0;i<pArray.length;i++)
		{
			pArray[i] = this.fruits.get(i);
		}

		return pArray;
	}

	public int getSize() {
		return this.fruits.size();
	}

	public boolean contains(String inputText) 
	{	
		return fruits.contains(inputText);
	}







}
