/*
Лабораторная работа 1 -- Условные переходы и циклы

Необходимо вычислить и вывести на экран значения функции, заданной несколькими выражениями,
для заданного интервала Xн ≤ X ≤ Xк и шага dX изменения аргумента. 
Параметры a, b, c – действительные числа. 

Функция задана, как:
F = a * (x + c) * (x + c) - b, при x < 0 и b =/= 0
F = (x - a) / c, при x > 0 и b = 0
F = a + (x / c), в остальных случаях

Примечание: если знаменатель равен нулю, значение функции должно быть 0; 
вывод значения функции должен содержать не больше двух знаков после запятой.

Пример ввода: 1 12 0 -10 -1 1
Пример вывода: 88.00 69.00 52.00 37.00 24.00 13.00 4.00 -3.00 -8.00 -11.00
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 0, b = 0, c = 0, xn = 0, xk = 0, dx = 0, x = 0, F = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &xn);
    scanf("%f", &xk);
    scanf("%f", &dx);

    x = xn;

    // реализация алгоритма здесь

    return 0;
}
