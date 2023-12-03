package exercises;

public class Matrix {
	//size of 2 by 2
	//indexes: 0 , 1
	private final int ROW = 2;
	private final int COLUMN = 2;
	private int[][] matrix = new int[ROW][COLUMN];
	
	public Matrix() {
		this.matrix[0][0] = 1;
		this.matrix[0][1] = 0;
		this.matrix[1][0] = 0;
		this.matrix[1][1] = 1;
		// defaults is 0 so don't need to set
	}
	
	public String toString() {
		StringBuilder cell = new StringBuilder();
		
		for (int row = 0; row < this.ROW; row++) {
			cell.append("|");
			for (int column = 0; column < this.COLUMN; column++) {
				cell.append(this.read(row, column));
				cell.append("|");
			}
			
			cell.append("\n");
		}
		
		return cell.toString();
	}
	
	public boolean validCellCheck(int row, int column) {
		boolean validCellCheckResult = false;
		
		if((0 <= row) && (row < this.ROW)
				&& (0 <= column)
				&& (column < this.COLUMN)) {
			validCellCheckResult = true;
		}
		
		return validCellCheckResult;
	}
	
	public int read(int row, int column) {
		if(validCellCheck(row, column)) {
			return this.matrix[row][column];			
		}
		else {
			System.out.println("Invalid cell!");
			return 0;
		}		
	}
	
	public void write(int row, int column, int value) {
		if(validCellCheck(row, column)) {
			this.matrix[row][column] = value;		
		}
	}
	
	public void scale(int scalar) {
		for (int row = 0; row < this.ROW; row++) {
			for (int column = 0; column < this.COLUMN; column++) {
				this.write(row, column, (this.read(row, column) * scalar));
			}
		}
	}
	
	public Matrix add(Matrix other) {
		Matrix sum = new Matrix();
		
		for (int row = 0; row < this.ROW; row++) {
			for (int column = 0; column < this.COLUMN; column++) {
				sum.write(row, column, this.matrix[row][column] + other.read(row, column));
			}
		}
		
		return sum;
	}
	
	//https://www.youtube.com/watch?v=BtDPVc7H1Zs
	//https://www.youtube.com/watch?v=7kZDlUTct9k
	public Matrix mult(Matrix other) {
		Matrix mult = new Matrix();
		int cellValue = 0;
		
		for (int row = 0; row < this.ROW; row++) {
			for (int column = 0; column < this.COLUMN; column++) {
				for (int k = 0; k < this.ROW; k++) {
					cellValue += this.matrix[row][k] * other.read(k, column);
				}
				mult.write(row, column, cellValue);
				cellValue = 0;
			}
		}	
		return mult;
	}
}
