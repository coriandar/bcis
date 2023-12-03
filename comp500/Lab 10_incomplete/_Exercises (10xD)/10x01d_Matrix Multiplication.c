/*
// DESIGN
	DECLARE matrix_a
	DECLARE matrix_b
	DECLARE result

	PRINT Matrix A / B:
		FOR
			FOR
				PRINT %3d
				PRINT "\n" (after 4th)
			ENDFOR
		ENDFOR

	COMPUTE Addition
		FOR
			FOR
			sum = matrix_a[x][y] + matrix_b[x][y];
			ENDFOR
		ENDFOR

	PRINT Result:
		FOR
			FOR
				PRINT %3d
				PRINT "\n" (after 4th)
			ENDFOR
		ENDFOR


// LEARNT
	Use pointer to access 2D array
	https://stackoverflow.com/questions/1052818/create-a-pointer-to-two-dimensional-array

	for loop declare more than 1 of same type.
	https://linuxhint.com/declare-multiple-variables-for-loop-c/
*/

#include <stdio.h>

void print_matrix(int(*matrix)[4]);
void compute_multiply(int(*matrix_a)[4], int(*matrix_b)[4], int(*matrix_r)[4]);

int main(void)
{
	int matrix_a[4][4] =
	{
		{ 1, 3, 2, 5 },
		{ 4, 5, 2, 4 },
		{ 1, 1, 2, 2 },
		{ 5, 3, 3, 1 }
	};

	int matrix_b[4][4] =
	{
		{ 2, 2, 4, 1 },
		{ 1, -5, 2, 3 },
		{ 3, 3, -2, 5 },
		{ 6, 7, 3, 2 }
	};

	printf("Matrix A:\n");
	int(*p_matrix_a)[4] = matrix_a;
	print_matrix(p_matrix_a);

	printf("Matrix B:\n");
	int(*p_matrix_b)[4] = matrix_b;
	print_matrix(p_matrix_b);

	/*
	int result[16] = { 0 };

	same as:

	int result[16] =
	{
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0
	};
	*/

	// therefore
	int matrix_r[4][4] = { 0 };

	int(*p_matrix_r)[4] = matrix_r;

	compute_multiply(p_matrix_a, p_matrix_b, p_matrix_r);
	printf("Result:\n");
	print_matrix(p_matrix_r);

	return 0;
}

void print_matrix(int(*matrix)[4])
{
	printf("\n");

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			printf("%3d", matrix[row][column]);

			if (column == 3)
			{
				printf("\n");
			}
		}
	}

	printf("\n");
}

void compute_multiply(int(*matrix_a)[4], int(*matrix_b)[4], int(*matrix_r)[4])
{
	//for loop declare another int variable
	for (int row = 0, index = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++, index++)
		{
			for (int count = 0; count < 4; count++)
			{
				matrix_r[row][column] += matrix_a[row][count] * matrix_b[count][column];
			}
		}
	}
}