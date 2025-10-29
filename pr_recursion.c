#include <stdio.h>

// https://sourceacademy.org/sicpjs/1.2.2

int factorial(int n) {
    // return (n == 1) ? 1 : n * factorial(n - 1);
    if (n == 1) return 1;
    return n * factorial(n - 1);
} 

int fib_bad(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_bad(n - 1) + fib_bad(n - 2);
}

int fib_iter(int, int, int);

int fib(int n) {
    return fib_iter(1, 0, n);
}

int fib_iter(int a, int b, int count) {
    return count == 0
            ? b
            : fib_iter(a + b, a, count - 1);
}


int main() {

    printf("%d ", fib(16));



}
