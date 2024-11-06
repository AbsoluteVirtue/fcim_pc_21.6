/*
    Найти такие k, для которых среднее арифметическое k-ой строки совпадает с k-ым столбцом.

    Вывести на экран элементы матрицы выше главной диагонали, не включая элементы на диагонали.

    Пример ввода: 4 4 3 1 2 3 6 5 6 7 8 13 14 15 16 9 10 11 12
    Пример вывода: 2 3 6 7 8 16
*/

#include <assert.h>
#include <stddef.h>
#include <stdio.h>

int main( void )
{
    size_t rows = 0, cols = 0, index = 0;

    scanf("%zu%zu%zu", &rows, &cols, &index);

    const size_t NUM_ROWS = rows;
    const size_t NUM_COLS = cols;
    int matrix[NUM_ROWS][NUM_COLS];

    for (size_t i = 0; i < NUM_ROWS; i++)
    {
        for (size_t j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // алгоритм и вывод результата здесь
    // в эту переменную надо записать результат:
    size_t k = 0;

    // проверка правильности алгоритма, неумелыми руками не трогать:
    assert(k == index);
}
