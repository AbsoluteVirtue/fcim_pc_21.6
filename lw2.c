/*
Лабораторная работа 2 -- Массивы

Необходимо найти в заданном массиве целых чисел максимальный и минимальный элементы, затем сжать массив, 
удалив все нечетные элементы, заменив их нулями, все обнуленные элементы перенести в конец массива.

Примечание: если для работы алгоритма нужны дополнительные библиотки,
не забывайте их тоже объявлять.

Пример ввода: 0 -18 4 77 2 -3 1 44 7 10 
Пример вывода: 77 -18 -18 4 2 44 10 0 0 0 0 0  
(где 77 - максимальный элемент, -18 - минимальный элемент, за ним - сжатый массив).
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array [10] = {0};

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%i", &array[i]);
    }

    // решение задачи и вывод результатов

    return 0;
}
