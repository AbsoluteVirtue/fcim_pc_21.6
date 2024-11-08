/*
Лабораторная работа 6 -- Массивы структур

Необходимо для заданного ввода выполнить следующие задачи.

1. Создать таблицу из заданного количества рядов, каждый из которых представлен структурой record.

2. Созданную таблицу заполнить данными из потока ввода stdin.

3. В заполненной таблице найти нужный ряд по заданной строке, которая ссылается на фамилию из таблицы. Вывести таблицу на экран.

4. Отсортировать таблицу по возрастанию относительно поля, хранящего фамилию. Вывести таблицу на экран.

5. Отсортировать таблицу по убыванию относительно поля, хранящего дату рождения. Вывести таблицу на экран.

Пример ввода: 2 White White Walter Heisenberg 7 9 1958 Pinkman Jesse Diesel 24 9 1984
Пример вывода: Walter Heisenberg 7 9 1958
               Pinkman Jesse Diesel 24 9 1984
               White Walter Heisenberg 7 9 1958
               Pinkman Jesse Diesel 24 9 1984
               White Walter Heisenberg 7 9 1958
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _time {
    unsigned long days;
    unsigned long months;
    unsigned long years;
} time;

typedef char* string;

typedef struct _record {
    string name;
    string surname;
    string group;
    time date;
} record;

int main(void)
{
    unsigned long count = 0;
    char input[10] = {0};
    scanf("%lu%s", &count, input);

    // выделение памяти под таблицу

    // заполнение таблицы из stdin

    // поиск в таблице по фамилии, вывод результата поиска

    // сортировка таблицы по возрастанию относительно фамилии
    
    // вывод отсортированной таблицы

    // сортировка таблицы по убыванию относительно даты
    
    // вывод отсортированной таблицы

}
