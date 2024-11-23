#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct first {
    int a[10];
};

typedef struct first first_t;

typedef struct {
    char *name;
    int count;
} second_t;

void f(struct first arg) {
    printf("%zu", sizeof(arg.a));
}

void g(first_t *arg) {
    printf("%zu", sizeof(arg->a));
}

int main(void)
{
    struct first s1 = {{0}};
    first_t s2 = {{0}};

    f(s1);
    g(&s2);

    printf("\n");

    second_t array[3] = {
        {.name=NULL, .count=0},
        {.name=NULL, .count=0},
        {.name=NULL, .count=0},
    };

    for (size_t i = 0; i < 3; i++)
    {
        char buf[80] = {0};
        scanf("%d%s", &array[i].count, buf);
        array[i].name = malloc(strlen(buf) + 1);
        strcpy(array[i].name, buf);
    }

    for (size_t i = 0; i < 3; i++)
    {
        printf("%s: %d\n", array[i].name, array[i].count);
    }
    
}
