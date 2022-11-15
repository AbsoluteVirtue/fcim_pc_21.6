/*
Задание: 
для заданной структуры и массива из указателей добавить сортировку массива по заданному полю
(в алфавитном порядке по убыванию). Не использовать функции библиотеки string.

Пример ввода: b d y t s h n i a x
Пример вывода: y x t s n i h d b a
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char group[50]; 
} data_t;

int main(int argc, char const *argv[])
{
    data_t * array [10] = {};

    for (size_t i = 0; i < 10; i++)
    {
        // ввод в массив здесь
    }

    // сортировка здесь

    for (size_t i = 0; i < 10; i++)
    {
        printf("%s ", array[i]->group);
    }
    
    // очистка памяти здесь
    
    // проверка очистки памяти
    for (size_t i = 0; i < 10; i++)
    {
        assert(!array[i]);
    }
}
