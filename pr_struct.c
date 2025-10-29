#include <stdio.h>
#include <stdlib.h>

// #define repeat(proc, times) {for(unsigned int i=0; i<times;++i) proc;}

void repeat(int (*proc)(const char *, ...), unsigned int times) {
    for(unsigned int i=0; i<times;++i) proc("hello\n");
}

int (cmp)(const void *a, const void *b) {
    return *((int*)b) - *((int*)a);
}

struct scope {
    int a[8];
    unsigned long n;
};

void sort(struct scope *s) {
    qsort(s->a, s->n, sizeof(*s->a), cmp);
}

int main() {
    struct scope x;
    unsigned long ss = sizeof(struct scope);
    x.a[0] = 4;
    x.n = sizeof(x.a) / sizeof(*x.a);

    sort(&x);
    
    for (unsigned int i = 0; i < sizeof(x.a) / sizeof(*x.a); ++i)
        printf("%d ", x.a[i]);

}

/*
int main() {
    {for(unsigned int i=0; i<5;++i) printf("hello\n");}
}
*/