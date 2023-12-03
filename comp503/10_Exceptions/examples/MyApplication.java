package examples;

import java.util.InputMismatchException;
import java.util.Scanner;

public class MyApplication {



	public static int inputAnotherData() throws InputMismatchException
	{
		Scanner scanner = new Scanner(System.in);
		int num = 0;
		System.out.println("Please enter a numerator:");		
		num = scanner.nextInt();
		return num;
	}
	public static void inputData() throws InputMismatchException
	{

		int num = inputAnotherData();
		int dem = 0;
		int q  = 0;

		Scanner scanner = new Scanner(System.in);		
		dem = scanner.nextInt();
		System.out.println("Please enter a denominiator:");

		if(dem != 0)
		{
			q = num/dem;
		}
		else
		{
			System.out.println("Attempt to divide by 0");
		}


	}


	public static void main(String[] args) 
	{



		inputData();




	}

}








