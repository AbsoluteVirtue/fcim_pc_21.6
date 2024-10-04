// https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.html
// https://www.youtube.com/watch?v=kPRA0W1kECg

#include <math.h>
#include <stddef.h>
#include <stdio.h>


int main( void ) {

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

#ifdef q1
int main( void ) {

    int x = 2, y = 3;
    float Pi;
    Pi = atan(1) * 4;
    float r;
    if (x / y != 0) {
         r = sin(Pi/x);
    } else {
         r = cos(Pi/x);
    }
    printf("%f", r);
}
#endif

#ifdef q2
void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int main(void) {

    char string[100] = {0};

    scanf("%s", string);
    printf("%s", string);

    // 1. iterate from start to \0, find index n
    // 2. swap(string[0], string [n-3])
    // 3. swap(string[1], string [n-2])

    // SWAP a b
    //      t = a
    //      a = b
    //      b = t

    size_t n = 100;
    for (size_t i = 0; i < 100; i++)
    {
        if(string[i] == 0) { n = i; break; }
    }

    swap(&string[0], &string[n - 3]);
    swap(&string[1], &string[n - 2]);
    
    printf("%s", string);
}
#endif

#ifdef q3
int main(void) {

    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t n = 0;
    int s = 0;
    for (size_t i = 0; i < 10; i++)
    {
        if(
            (a[i] % 2 == 0) &&
            (a[i] % 3 == 0) &&
            (a[i] % 5 != 0)
        ) {
            n = n + 1;
            s += a[i];
        }
    }

    printf("%d ", (int)(s / n));
}
#endif

#ifdef q4
int main(void)
{
    int m[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int max1, max2;
    max1 = 1;
    max2 = 2;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (j >= 3 - i - 1)
            {
                if (m[i][j] > max1)
                {
                    max2 = max1;
                    max1 = m[i][j];
                }
                else if (m[i][j] > max2) {
                    max2 = m[i][j];
                }
            }
        }
    }
}
#endif
