/*
    Транспонировать заданную квадратную матрицу (повернуть все элементы относительно главной диагонали), затем вывести на экран элементы выше побочной диагонали.

    Для ввода: 3 3 4 5 6 7 8 9 10 11
    вывод: 3 6 4
*/

#include <stdio.h>

int main( void )
{
    int n = 0;
    scanf("%d", &n);

    const int NUM_ROWS = n;
    const int NUM_COLS = n;
    int matrix[NUM_ROWS][NUM_COLS];

    for (size_t i = 0; i < NUM_ROWS; i++)
    {
        for (size_t j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // алгоритм и вывод результата здесь

}
