package MidTermRevision;

public class Matrix {
	private int[][] matrix;
	
	public static void main(String[] args)
	{
		Matrix matrixTest = new Matrix();
		System.out.println(matrixTest);
	}
	
	/**
	 * Constructor
	 * */
	public Matrix() {
		matrix = new int[2][2];
		matrix[0][0] = 1;
		matrix[1][1] = 1;
	}
	
	/**
	 * toString
	 * */
	public String toString() {
		StringBuilder format = new StringBuilder();
		for(int i = 0; i < 2; i++) {
			format.append("| ");
			for(int k = 0; k < 2; k++) {
				format.append(this.matrix[i][k]+" | ");
			}
			format.append("\n");
		}
		return format.toString();
	}
	
	public Matrix mult(Matrix other) {
		Matrix mult = new Matrix();
		int cellValue = 0;
		
		for (int row = 0; row < 2; row++) {
			for (int column = 0; column < 2; column++) {
				
				for (int k = 0; k < 2; k++) {
					cellValue += this.matrix[row][k] * other.matrix[k][column];
				}
				
				mult.matrix[row][column] = cellValue;
				cellValue = 0;
			}
		}	
		return mult;
	}
}
