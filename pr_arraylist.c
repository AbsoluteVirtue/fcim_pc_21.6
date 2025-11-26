#include <assert.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct arraylist {
    size_t n;
    size_t capacity;
    int *d;
    
} arraylist;

void push(arraylist *a, int v) {
    if (a->capacity == a->n) {
        if (a->capacity) a->capacity *= 2;
        else a->capacity = 1;
        a->d = realloc(a->d, sizeof(int) * a->capacity);
    }
    a->d[a->n] = v;
    a->n++;
    assert(a->n <= a->capacity);
}

int main() {

    arraylist a = {0, 0, 0};

    push(&a, 1);
    push(&a, 2);
    push(&a, 3);
    push(&a, 4);
    push(&a, 5);
    push(&a, 6);
    push(&a, 7);

    for (size_t i = 0; i < a.n; i++)
    {
        printf("%d ", a.d[i]);
    }
    

} 
