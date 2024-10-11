/*

Найти сумму всех соседей заданного элемента заданной матрицы.

Вывести на экран элементы между главной и побочной диагоналями от 2 до 5 часов по часовой стрелке.

*/

#include <stdio.h>

int main()
{
    int rows = 0, sum = 0;
    scanf("%d%d", &rows, &sum);

    const int N = rows;
    int matrix[N][N];

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // алгоритм и вывод результата здесь

}
