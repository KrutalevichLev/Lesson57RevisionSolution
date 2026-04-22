// Task 01 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// вычисляет среднее арифметическое ненулевых элементов матрицы.
#include "util.h"

//double sum_of_no_zero_numbers(int array[], int size) {
//	double sum = 0;
//	int count = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (array[i] != 0) {
//			sum += array[i];
//			count++;
//		}
//	}
//
//	return sum;
//}

double calculate_arithmetical_mean_of_nonzero_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {

	if (n < 1 || m < 1) {
		return -1;
	}


	double sum = 0;
	int count = 0;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] != 0) {
				sum += matrix[i][j];
				count++;
			}
		}
	}
	
	count <= 0 ? count++ : count;

	return sum / count;
}