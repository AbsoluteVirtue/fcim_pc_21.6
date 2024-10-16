/*

Найти сумму всех соседей заданного элемента заданной матрицы.

Вывести на экран элементы между главной и побочной диагоналями от 2 до 5 часов по часовой стрелке.

Например, для ввода: 3 1 2 3 4 5 6 7 8 9 1 1 40
вывод: 3 5 6 9

*/

#include <assert.h>
#include <stdio.h>
#include <stddef.h>

int main( void )
{
    size_t n = 0;
    scanf("%zu", &n);

    const size_t N = n;
    int matrix[N][N];

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    size_t m = 0, n = 0;
    int sum = 0, result = 0;
    scanf("%zu%zu%d", &m, &n, &sum);

    // алгоритм и вывод результата здесь

    // проверка суммы
    assert(sum == result);
}
