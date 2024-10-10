#include <stdio.h>
#include <stddef.h>

// статические переменные хранятся вне стэка
static char *x;
static int y;

// функция - инструмент обобщения вычислительных процессов
void   // тип возвращаемого значения нужно указывать даже если функции нечего возвращать
print( // имя функции - абстракция вычислительного процесса
      char *x, size_t y) // параметры функции - связанные переменные
{ // тело функции определяет локальный блок для всех имен, включая параметры
    size_t i = 0; // свободная переменная
    for (; i < y; i++)
        printf("%d ", x[i]); // в функции можно вызывать другие функции
}

// обобщенный код можно задавать и с помощью макро для текстовой подмены
#define swap(x, y, z) \
    z t = x;          \
    x = y;            \
    y = t;

// функции можно заявлять без определения:
int factorial(int); 
size_t fibonacci(size_t);
// прототип функции должен находиться над первым вызовом функции

int main(void) {

    int a = 5;
    int b = 6;

    swap(a, b, int) // обратите внимание на отсутствие точки с запятой ;
                    // она будет сюда вставлена из определения макро
    int c = a + b;
    int d = 10;
    char array[] = {a, b, c, d};
    size_t count = 4;

    print(array, count); // вызов функции - аппликация имени функции к списку аргументов

    printf("%d ", factorial(a));

    printf("%zu ", fibonacci(d));
}

int // тип возвращаемого значения нужен для выделения памяти под это значение на стэке
factorial(int n) // определение функций может быть в любой части программы
{ // n! ​= ​n⋅[(n − 1)⋅(n − 2) ⋯ 3⋅2⋅1] = n⋅(n − 1)!​
    if (n == 1) return n;
    return n * factorial(n - 1);
    // обратите внимание на то, что функция вызывает саму себя
    // рекурсивная функция - определение функции содержит обращение к себе же
} // линейная рекурсия (количество процессов растет пропорционально значению аргумента)

size_t fibonacci(size_t n) {
    if (n == 0 || n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
} // дерево рекурсии (количество процессов растет экспоненциально)

#ifdef iteration
// в языке С нет лямбда-выражений, поэтому вспомогательные функции надо определять заранее
int factorial_helper(int, int, int);

int factorial(int n) {
    return factorial_helper(1, 1, n); // function priming
} // линейная итерация (количество процессов не изменяется относительно значения аргумента)

int factorial_helper(int product, int count, int n) {
    if (count > n) return product;
    return factorial_helper(product * count, count + 1, n);
}

size_t fib_helper(size_t a, size_t b, size_t n);

size_t fibonacci(size_t n) {
    return fib_helper(1, 0, n);  // function priming
}

size_t fib_helper(size_t a, size_t b, size_t n) {
    if (n == 0) return b;
    return fib_helper(a + b, a, n - 1);
}
#endif

#ifdef lambda
// Пример реализации лямбда-выражения на базе макро, слабонервным не смотреть:
#define lambda(lambda$_ret, lambda$_args, lambda$_body) \
    (                                                   \
        {                                               \
            lambda$_ret lambda$__anon$ lambda$_args     \
                lambda$_body                            \
                    &amp;                               \
            lambda$__anon$;                             \
        })
// пример использования для прототипа:
float average(float (*fn)(float inp));

average(lambda(float, (float x), { return 2 * x; }));
#endif
