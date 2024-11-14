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
    float z;
};

union C
{
    int x;
    char *y;
    float z;
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
    // { int | char | float }
    b.x = 20;

    union C c = {.x = 15};
    // { int или char или float }
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
    // [ { int | char | float } | { int | char | float } | { int | char | float } ]
    for (size_t i = 0; i < 3; i++)
    {
        t[i].x = i;
        t[i].y = "hi";
        t[i].z = i;
    }
    
    return EXIT_SUCCESS;
}
