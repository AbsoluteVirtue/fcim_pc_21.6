#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{ // AND: int * char
    int year;     // 4
    char model;   // 1
    double price; // 8
    char title[50];
} product;

void new_prod(product **a, size_t n) {
    *a = (product*)calloc(n, sizeof(product));
    for (int i = 0; i < n; i++)
    {
        (*a)[i] = { .year=i+1999, .model=i + 100, .price=i+10000};
        strcpy((*a)[i].title, "hello");
    }
}

typedef enum
{
    INT,
    CHAR,
    STR
} numbers;

typedef union
{ // OR: int | char | string
    int x;
    char y;
    char *z;
} object;

typedef struct
{
    object o;
    numbers c;
} variant;

variant f(variant a, variant b)
{
    if (a.c == INT)
        return {.o = {.x = a.o.x + b.o.x}, .c = INT};
    if (a.c == CHAR)
    {
        char *p = (char *)calloc(3, sizeof(char));
        p[0] = a.o.y;
        p[1] = b.o.y;
        return {.o = {.z = p}, .c = STR};
    }
}

int main() {
    
    product *p = NULL;
    new_prod(&p, 4);

    for (size_t i = 0; i < 4; i++)
    {
        if(0 == strcmp(p[i].title, "hello")) printf("%d %d %f %s\n", 
            p[i].model, p[i].year, p[i].price, p[i].title);
    }
    
    variant l = {.o = {.y = '3'}, .c = CHAR};
    variant m = {.o = {.y = '4'}, .c = CHAR};

    printf("%s", f(l, m).o.z);

    return 0;
}
