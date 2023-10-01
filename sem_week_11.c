
#include <stdio.h>

void copy(const char *start, const char *end, char *dest)
{
    while (start != end) *dest++ = *start++;
}

void cons(char *p, const char *x)
{
    const char *start = x;
    while (*x++)
        ;
    copy(start, x, p);
}

void insert(char *p, unsigned int idx, const char *x)
{
    const char *start = x;
    unsigned int k = 0;
    while (*x++)
    {
        k++;
    }

    char *tmp = p;
    while (*tmp++)
        ;
    for (unsigned int i = tmp - p; i >= idx; i--)
    {
        p[i + k] = p[i];
    }
    copy(start, start + k, p + idx);
}

void replace(char *p, const char f, const char s)
{
    while (*p)
    {
        if (f == *p)
            *p = s;
        ++p;
    }
}

int main(int argc, char const *argv[])
{
    char test[100] = {[0 ... 99] = '\0'};

    cons(test, "hello");

    printf("%s\n", test);

    insert(test, 5, "! ");
    insert(test, 7, "world");

    printf("%s\n", test);

    replace(test, '!', ',');

    printf("%s\n", test);
}
