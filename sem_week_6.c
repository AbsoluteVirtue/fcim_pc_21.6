#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

typedef enum
{
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN
} ea;

typedef struct a
{
    int x;
    char y;
} sa;

int main(int argc, char const *argv[])
{
    sa A;
    int B[2];

    B[0] = 10;
    A.x = 10;

    *(B + 1) = 20;
    A.y = 20;

    printf("%d %d\n", B[0], B[1]);
    printf("%d %d\n", TEN, ELEVEN);
    printf("%d %d\n", A.x, A.y);

    sa C[2] = {{1, 2}, {3, 4}};
    printf("%d %d\n", C[0].x, C[1].y);
}
