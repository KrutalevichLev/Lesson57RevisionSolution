// Task 04 [The Sum of elements of columns with extreme elements]
// Сумма элементов столбцов с экстремальными элементами
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.

#include "util.h"

int sum_column(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int column_index) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][column_index];
	}

	return sum;
}

int find_min_number(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int min = 9;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}

	return min;
}

int find_max_number(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}

	return max;
}

bool column_have_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m, int column_index) {
	int min = find_min_number(matrix, n, m);
	int max = find_max_number(matrix, n, m);

	for (int i = 0; i < n; i++)
	{
		if (matrix[i][column_index] == max || matrix[i][column_index] == min) {
			return true;
		}
	}

	return false;
}

int sum_elements_of_columns_with_extreme_value(int matrix[DEFAUL_SIZE][DEFAUL_SIZE], int n, int m) {

	if (n < 1 || m < 1) {
		return -1;
	}

	int sum = 0;
	
	for (int i = 0; i < m; i++)
	{
		if (column_have_extreme_value(matrix, n, m, i)) {
			sum += sum_column(matrix, n, i);
		}
	}

	return sum;
}