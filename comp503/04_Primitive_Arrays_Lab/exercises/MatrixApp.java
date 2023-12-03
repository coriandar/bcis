package exercises;

public class MatrixApp {

	public static void main(String[] args)
	{
		Matrix matrixTest = new Matrix();
		
		System.out.println("Default: ");
		System.out.println(matrixTest);
		
		System.out.println("Scale factor 5: ");
		matrixTest.scale(5);
		System.out.println(matrixTest);
		
		Matrix matrixTest2 = new Matrix();
		matrixTest2.scale(10);
		
		System.out.println("Add matrices: ");
		Matrix add = matrixTest.add(matrixTest2);
		System.out.println(add);
		
		System.out.println("Multiply matrices: ");
		System.out.println("Matrix 1:");
		System.out.println(matrixTest);
		System.out.println("Matrix 2:");
		System.out.println(matrixTest2);
		System.out.println("Result	:");
		Matrix multiply = matrixTest.mult(matrixTest2);
		System.out.println(multiply);
	}
}
