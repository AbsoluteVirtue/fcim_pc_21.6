#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  
{
    char *p;
    size_t n;
} string;

void print(string *a)
{
    for (size_t i = 0; a->p[i]; i++)
    {
        printf("%c", a->p[i]);
    }
}

void cons(string* a, const char *b)
{
    free(a->p);
    a->n = strlen(b);
    a->p = malloc(sizeof(a->n + 1));
    assert(a->p);
    strcpy(a->p, b);
}

string concat(string *a, string *b)
{
    string n;
    n.n = a->n + b->n;
    n.p = malloc(sizeof(n.n + 1));
    assert(n.p);

    strcpy(n.p, a->p);
    strcpy(n.p + a->n, b->p);

    return n;
}

char at(string *a, const unsigned int i)
{
    assert(i < a->n);
    return a->p[i];
}

#define PRINT(x) print(&x)

int main(int argc, char const *argv[])
{
    string s;
    cons(&s, "hello");
    print(&s);

    string t;
    cons(&t, "goodbye");
    print(&t);

    string u = concat(&s, &t);
    PRINT(u);

    printf("%c", at(&u, 5));
}
