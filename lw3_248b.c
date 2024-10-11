/*

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
