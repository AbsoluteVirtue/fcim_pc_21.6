/*
Задание:
Для заданного двумерного массива определить элемент,
идущий подряд наибольшее количество раз в кажждой строке (если таких элементов несколько,
вывести первый подходящий под это условие). Также определить сумму элементов массива,
находящихся в четвертой четверти, включая диагонали.
Вывести на экран результат. 

Например, для матрицы:
3 4 5

4 4 5

6 7 7

Пример ввода: 3 3 3 4 5 4 4 5 6 7 7
Пример вывода: 4 17
*/

#include <stdio.h>

int main(int argc, char const *argv[])
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

    return 0;
}
