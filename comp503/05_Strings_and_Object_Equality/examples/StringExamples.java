package examples;

public class StringExamples {


	public static String toUpperCase(String s)
	{
		String output = "";
		for(char ch : s.toCharArray())
			output+=(ch>='a')&&(ch<='z')?(char) (ch-32):ch;

		return output;
	}

	public static String reverse(String s)
	{
		String output="";
		for(int i=s.length()-1;i>=0;i--)
			output+=s.charAt(i);
		return output;
	}




	public static void main(String[] args) 
	{

		String dog = new String("dog");

		String cat = "Cat";

		//initialise the empty string object ""
		String s1 = new String();
		//initialise a new string object "hello"
		String s2 = new String(new char[]{'h','e','l','l','o'});
		//initialise a new string object with contents from s2
		String s3 = new String(s2);
		//initialise a new string object "lo"
		String s4 = new String(new char[]{'h','e','l','l','o'},3,2);

		String str = "abc"+"def";

		int a = 3;
		int b = 2;
		System.out.println("Sum: " + a + b);
		System.out.println("Sum: " + (a + b));

		Person aPerson = new Person("Robin Banks");
		System.out.println("Person is: "+aPerson);



		System.out.println("Cat".concat(dog)); 
		System.out.println("Cat".concat("Dog"));

		String catDog = cat.concat(dog);
		System.out.println("CatDog has "+catDog.length()+ " letters");   //Output: CatDog has 6 letters


		System.out.println(catDog); // output: CatDog 
		String capitalCatDog = catDog.toUpperCase();
		System.out.println(capitalCatDog); //output: CATDOG
		System.out.println(catDog.toLowerCase()); //output: catdog


		System.out.println("Hello!".length());		// number of chars in the string

		System.out.println("Hello!".charAt(4));		 //5th character of the string 

		char[] cha = new char[6];
		System.out.println("Hello!".toCharArray());


		System.out.println(StringExamples.toUpperCase("Hello!"));
		System.out.println(StringExamples.reverse("Hello!"));

		String c = catDog.substring(0,3); //output Cat
		String d = catDog.substring(3);  //output: Dog
		String e = "friendship";
		String f = e+ " "+e.substring(3,7);  //output: friendship ends
		
		String stra = "sit sat";
		String strb = "I will give my students A+";
		String yummyChocky = stra.replace('s','K'); //Output: Kit Kat//double method call, output of 1st is used to call the 2nd method
		String  newGrade = strb.replace('A', 'F').replace('+', '-'); //Output: I will give my students F-;
		
		System.out.println("bonjour".replace('o', 'e'));


		stra = "ant";
		strb = "bat";
		if(stra.compareTo(strb) <0)
			System.out.println(a+" comes before "+b);


		System.out.println("Hello".equals("Hello"));
		
		System.out.println("good bye".equals("Good Bye"));
		
		
		System.out.println("LOUD".equalsIgnoreCase("loud"));
		
		System.out.println("quiet".equalsIgnoreCase("QUIET"));
		
		s1 = new String("Hello");
		s2 = new String("Hello");
		
		System.out.println(s1 == s2);
		System.out.println(s1.equals(s2));

	}

}
