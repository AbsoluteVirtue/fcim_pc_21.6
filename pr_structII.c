#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { // int * char
    int year;    // 4
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


int main() {
    
    product *p = NULL;
    new_prod(&p, 4);

    for (size_t i = 0; i < 4; i++)
    {
        if(0 == strcmp(p[i].title, "hello")) printf("%d %d %f %s\n", 
            p[i].model, p[i].year, p[i].price, p[i].title);
    }
    


    return 0;

}
