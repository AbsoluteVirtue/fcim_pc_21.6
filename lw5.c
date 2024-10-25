/*
Необходимо для заданной строки выполнить следующие задачи.

1. Привести строку к написанию с заглавной буквы, т.е. для ввода "kolbasa" результат: "Kolbasa". Результат вывести на экран.

2. Изменить строку таким образом, чтобы все буквы в ней были заглавными, т.е. для ввода "kolbasa" результат: "KOLBASA". Результат вывести на экран.

3. Изменить строку таким образом, чтобы все буквы в ней были прописными, т.е. для ввода "KOLBASA" результат: "kolbasa". Результат вывести на экран.

4. Определить, если строка является палиндромом (пишется слева направо так же, как справа налево).
Нельзя пользоваться функциями из библиотеки для обработки строк (<string.h> и т.п.). Вместо них необходимо организовать код в свои функции.

Пример ввода: 1 HeLLo
Пример вывода: Hello HELLO hello
*/

#include <assert.h>
#include <stdio.h>

typedef enum { false, true } bool;


int main(void)
{
    int counter = 0;
    char str[20] = {0};

    scanf("%i%s", &counter, str);

    // вывод результатов здесь

    bool res = (/* если симметрично */) ? true : false;
    if (counter % 2) assert(!res);
    else assert(res);
}
