package examples;

public class LoopExamples {

	public static void main(String[] args) 
	{
		
		int number = 0;
		
		while(number < 10)
		{			
			System.out.println("number = "+number);
			number++;
		}
		
		String s = "";
		while(s.length()<10)
		{
			s+="1";
		}
		System.out.println(s);
		
		
		for(int i = 0; i<10;i++)
		{
			System.out.println("i = "+i);			
		}
		
		for(int k=20;k > 10;k-=2)
		{
			System.out.println("k = "+k);
		}
		
		
		int j = 0;
		do
		{
			System.out.println("j = "+j);
			j++;
		} while (j < 10);

		
		
		
	}

}
