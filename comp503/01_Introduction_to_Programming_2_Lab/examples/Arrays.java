package examples;

public class Arrays {

		
	public static void main(String[] args) 
	{
		
		int[] a;
		a = new int[5];
	
		System.out.println("The length of array is "+a.length);
		
		for(int i=0;i<a.length;i++)
		{
			a[i] = i*2;
		}
		
		for(int i=0;i<a.length;i++)
		{
			System.out.println(a[i]);
		}
	}

}
