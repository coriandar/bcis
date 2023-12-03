package lab04;

public class Matrix {
	private int[][] matrix = new int[2][2];
	
	public static void main(String[] args)
	{
		Matrix matrixTest = new Matrix();
		Matrix matrixTest2 = new Matrix();
		matrixTest.scale(5);
		matrixTest2.scale(10);
		
		System.out.println("Matrix 1:\n" + matrixTest);
		System.out.println("Matrix 2:\n" + matrixTest2);
		System.out.println("Result:\n" + matrixTest.mult(matrixTest2));
	}

	public Matrix() {
		this.matrix[0][0] = 1;
		this.matrix[1][1] = 1;
	}
	
	public String toString() {
		StringBuilder output = new StringBuilder();
		for (int i = 0; i < this.rowLen(); i++) {
			output.append("| ");
			for (int k = 0; k < this.colLen(); k++) {
				output.append(this.read(i, k) + " | ");
			}
			output.append("\n");
		}
		return output.toString();
	}
	
	/**
	 * methods
	 * */
	public Matrix mult(Matrix m) {
		Matrix mult = new Matrix();
		
		for (int i = 0; i < this.rowLen(); i++) {
			int cellValue = 0;
			
			for (int j = 0; j < this.colLen(); j++) {
				for (int k = 0; k < this.colLen(); k++) {
					cellValue += this.matrix[i][k] * m.read(k, j);
				}
				
				mult.write(i, j, cellValue);
				cellValue = 0;
			}
		}
		return mult;
	}
	
	
	public Matrix add(Matrix m) {
		Matrix sum = new Matrix();
		for (int i = 0; i < this.rowLen(); i++) {
			for (int k = 0; k < this.colLen(); k++) {
				sum.write(i, k, this.matrix[i][k] + m.read(i,k));
			}
		}
		return sum;
	}
	
	public int rowLen() {
		return this.matrix.length;
	}
	
	public int colLen() {
		return this.matrix[0].length;
	}
	
	public void scale(int c) {
		for (int row = 0; row < this.rowLen(); row++) {
			for (int col = 0; col < this.colLen(); col++) {
				this.write(row, col, (this.read(row, col) * c));
			}
		}
	}
	
	public void write(int i, int j, int value) {
		if (this.valid(i, j)) {
			this.matrix[i][j] = value;
		}
	}
	
	public int read(int i, int j) {
		if (this.valid(i, j)) {
			return this.matrix[i][j];
		}
		else {
			System.out.println("Invalid cell!");
			return -1;
		}	
	}
	
	public boolean valid(int row, int column) {
		return (0 <= row) && (row < rowLen())
				&& (0 <= column)
				&& (column < colLen());
	}
	
	/**
	 * getSetMethods
	 * */
	public int[][] getMatrix() {
		return matrix;
	}

	public void setMatrix(int[][] matrix) {
		this.matrix = matrix;
	}
}
