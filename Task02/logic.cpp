// Task 02 [The sum of elements]
// Сумма элементов 
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.

#include "util.h"

int sum_main_and_second_diagonales_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n){
    if (n < 1) {
        return -1;
    }
    
    int sum = sum_main_elements(matrix, n);
    sum += sum_additional_elements_without_intersection(matrix, n);

    return sum;
}

int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }
    return sum;
}

int sum_additional_elements_without_intersection(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (i != n - 1 - i) 
        {
            sum += matrix[i][n - 1 - i];
        }
    }
    return sum;
}