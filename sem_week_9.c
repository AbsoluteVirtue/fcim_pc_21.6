#include <stdio.h>

enum A
{
    ONE = 1,
    TWO,
    THREE
};

struct B
{
    int x;
    char *y;
    double z;
};

union C
{
    int x;
    char *y;
    double z;
};

int main()
{
    int a[3] = {1, 2, 3};
    // массив - это однородный блок памяти
    // [ int | int | int ]

    // если необходимо хранить разные типы данных, приходится идти на разные хитрости, например:
    void *d[3];
    // [ pointer | pointer | pointer ] -> [  *int  |  *char  |  *float  ]
    for (size_t i = 0; i < 3; i++)
    {
        d[i] = &a[i];
        *((char *)d[i]) = 10;
    }

    // в С для этого есть встроенный механизм - структуры {struct или union}

    struct B b = {.z = 9.5, .y = "hello", .x = 10};
/*
    { int | char | double }

    struct B
        size=24 align=8
        base size=24 base align=8
    B (0x0x7e7592f9f420) 0
*/
    b.x = 20;

    union C c = {.x = 15};
/*
    { int или char или double }

    union C
        size=8 align=8
        base size=8 base align=8
    C (0x0x7e7592f9f480) 0
*/
    c.y = "goodbye";
    // c.x теперь не доступен, как и c.z

    c.x = 1;
    // c.y теперь не доступен, как и c.z

    // enum - это разновидность структуры, которая хранит целые числа в определенном порядке
    switch (c.x)
    {
    case ONE: // ONE - это число 1 из enum A
        printf("case one");
        break;
    case TWO: // TWO - это число 2 из enum A
        printf("case two");
        break;
    case THREE: // THREE - это число 3 из enum A
        printf("case three");
        break;
    default:
        break;
    }

    // массивы структур удобно использовать для создания таблиц
    struct B t[3];
    // [ { int | char | double } | { int | char | double } | { int | char | double } ]
    for (size_t i = 0; i < 3; i++)
    {
        (*(t+i)).x = i;
        (t + i)->y = "hi";
        t[i].z = i;
    }
    
    return EXIT_SUCCESS;
}
