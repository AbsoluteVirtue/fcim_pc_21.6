/*
1. Создать таблицу из заданного количества рядов, каждый из которых представлен структурой record.
2. Созданную таблицу заполнить данными из потока ввода stdin.
3. Написать функцию, которая создает новую таблицу на основании данных из существующей таблицы:
   отфильтровать все ряды, в которых значение поля name начинается на заданную букву (без учета регистра).

Пример ввода: 
2                       (count)
White                   (surname)
Walter                  (name)
7                       (days)
9                       (months)
1958                    (years)
Pinkman Jesse 24 9 1984
w                       (needle)

Пример вывода: Pinkman Jesse 24 9 1984
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

struct date {
    unsigned int days;
    unsigned int months;
    unsigned int years;
};

struct record {
    string name;
    string surname;
    struct date birthday;
};

int main(void)
{
    size_t count = 0;
    scanf("%zu", &count);
    struct record table[count];

    // заполнение таблицы

    string needle = 0;
    scanf("%s", needle);

    //  фильрование таблицы и создание новой таблицы
}
