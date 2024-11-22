/*
    Для матрицы размера NxM определить первое значение, которое является минимумом в своей строке и максимумом в своем столбце.

    Вывести элементы матрицы выше побочной диагонали

    Пример ввода: 3 4 0 1 2 3 -1 2 3 4 -2 3 4 5
    Пример вывода: 0 0 1 -1
*/

#include <stdio.h>

int main( void )
{
    int rows = 0, cols = 0;
    scanf("%d%d", &rows, &cols);

    const int NUM_ROWS = rows;
    const int NUM_COLS = cols;
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
