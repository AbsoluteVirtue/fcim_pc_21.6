#include <stddef.h>
#include <stdio.h>

// https://www.youtube.com/watch?v=kPRA0W1kECg

int main() {

    #define count 5
    // const size_t count = 5;
    int a[][count] = { {101, 102, 103, 104, 105}, {201, 202, 203, 204, 205} };

    for(size_t i = 0; i < (count * 2); printf("%d ", *((int *)a + i++)));
    printf("\n");
    for(int *p = (int *)a; p != (int *)a + (count * 2); printf("%d ", *p++));
    printf("\n");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < count; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

}
