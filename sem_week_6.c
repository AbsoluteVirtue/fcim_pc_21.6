#include <stdio.h>
#include <stdlib.h>

int *consf(size_t);
void consp(int **, size_t);

int main() {

    const size_t n = 5;

    int a[n];

    int *b = calloc(n, sizeof(int));
    if (b == NULL) return (-1);

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d%d", a + i, &b[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d %d ", *(a + i), b[i]);
    }
    
    int *c = consf(n);

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    
    int *d = NULL;
    consp(&d, n);

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", d[i]);
    }
}

int *consf(size_t n) {
    int *p = malloc(n * sizeof(int));
    if (p == NULL) exit(-1);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    return p;
}

void consp(int **p, size_t n) {
    *p = malloc(n * sizeof(int));
    if (*p == NULL) exit(-1);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", *p + i);
    }
}
