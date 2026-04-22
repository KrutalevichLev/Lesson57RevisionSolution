// Task 03 [The Number of rows with a large number of positive elements]
// Количество строк с большим количество положительных элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).
#include "util.h"

int count_rows_with_more_positive_values(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	if (n <= 0 || m <= 0) {
		return -1;
	}

	int counter_position = 0;
	int counter_zero_negative = 0;
	int counter = 0;

	for (int i = 0; i < n; i++)
	{
		counter_position = 0;
		counter_zero_negative = 0;

		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] <= 0) {
				counter_zero_negative += 1;
			}
			else {
				counter_position += 1;
			}
		}

		if (counter_zero_negative < counter_position) {
			counter++;
		}

	}

	return counter;
}