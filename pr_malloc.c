#include <stdio.h>
#include <stdlib.h>



int main() {

    // int m[4][4];
    int **m = calloc(4, sizeof(int*));
    // while(!(m = malloc(4 * sizeof(int*))));
    if (m == NULL) return 0;

    for(size_t i = 0; i < 4; ++i)
    {    m[i] = malloc(sizeof(int) * 4);
        if (m[i] == NULL) return 0;

        for (size_t j = 0; j < 4; j++)
        {
            m[i][j] = rand();
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // malloc
    // calloc
    // free

    return 0;
}
