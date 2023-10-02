/*
Лабораторная работа 3 -- Матрицы

Необходимо для заданного двумерного массива реализовать следующие операции над квадратными матрицами.
1. Определить сумму элементов массива, находящихся в первой четверти, включая диагонали. Вывести на экран результат. 
2. Определить минимальную из сумм значений каждой из диагоналей матрицы, параллельных главной диагонали.
Вывести на экран результат. 

Для матрицы M(3x3):

3 4 5
4 4 5
6 7 7

Пример ввода: 3 3 3 4 5 4 4 5 6 7 7
Пример вывода: 16 5
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows = 0, cols = 0;
    scanf("%d%d", &rows, &cols);

    const int NUM_ROWS = rows;
    const int NUM_COLS = cols;
    int M[NUM_ROWS][NUM_COLS];

    for (size_t i = 0; i < NUM_ROWS; i++)
    {
        for (size_t j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    
    // алгоритм и вывод результата здесь

    return 0;
}
