// https://sourceacademy.org/sicpjs/1.2.1
// Iterative and recursive linear algorithms
// linear iteration: time complexity O(x), space complexity O(1)
// linear recursion: time complexity O(x), space complexity O(x)

#include <stdio.h>

int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return fib(n - 2) + fib(n - 1);
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int f(int product, int counter, int max_count)
{
    if (counter > max_count)
        return product;
    return f(counter * product, counter + 1, max_count);
}

int factorial2(int n)
{
    return f(1, 1, n);
}

int main(int argc, char const *argv[])
{
    printf("%d ", factorial(6));
    printf("%d ", factorial2(6));
    printf("%d", fib(6));
}
