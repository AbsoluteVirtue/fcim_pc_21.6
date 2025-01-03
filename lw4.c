/* 
Необходимо для заданной матрицы целых чисел выполнить следующие операции.
1. Транспонировать матрицу (повернуть матрицу вправо таким образом, чтобы строки стали столбцами, сохранив свой порядок).
Например, матрица М(2х3)

1 2 3
6 5 4

принимает вид Мт(3х2)

1 6
2 5
3 4

Для этого необходимо создать новую матрицу на "куче" (allocate on the heap). Вывести новую матрицу на экран.

2. Вычислить сумму произведений элементов каждой строки матрицы Мт.
Например, для матрицы выше результат будет равен 28. Вывести результат на экран.

Привер ввода: 2 3 1 2 3 6 5 4
Пример вывода: 1 6 2 5 3 4 28
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rows = 0, cols = 0;
    scanf("%d%d", &rows, &cols);

    const int NUM_ROWS = rows;
    const int NUM_COLS = cols;
    int** matrix;

    // выделение памяти здесь

    for (size_t i = 0; i < NUM_ROWS; i++)
    {
        for (size_t j = 0; j < NUM_COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // алгоритм и вывод результата здесь

}
