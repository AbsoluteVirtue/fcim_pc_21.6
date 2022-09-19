#include <stdio.h>

int main(int argc, char const *argv[])
{
    // целочисленная переменная i выполняет роль счетчика
    int i = 0;
    // GOTO цикл
label:
    printf("%d ", i);
    // инкремент счетчика, значение переменной увеличивается на 1
    i = i + 1;
    if (i < 5) // условие выхода их цикла
        goto label;

    printf("\n");

    // while цикл
    i = 0;
    while (i < 5) // условие выхода их цикла
    {
        printf("%d ", i);
        i = i + 1;
    }

    printf("\n");

    // do-while цикл
    i = 0;
    do // одна итерация цикла будет выполнена независимо от условия выхода
    {
        printf("%d ", i);
        i = i + 1;
    } while (i < 5); // условие выхода их цикла

    printf("\n");

    // for цикл
    for (int j = 0; j < 5; j = j + 1)
    {
        printf("%d ", j);
    }
}
