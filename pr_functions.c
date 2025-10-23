#include <math.h>
#include <stdio.h>

int fib(int n)
{
    // если аргумент стал равен 1 или 0, прервать рекурсивную цепочку вызовов:
    if (n <= 1) return n;
    // иначе рекурсивно просуммировать все варианты начиная с n:
    return fib(n - 1) + fib(n - 2); 
}

void digits(int x) 
{
    while(x)
    {
        printf("%d ", x % 10);
        x = x / 10;
    }
    // return не нужен, т.к. функция типа void
}

// наибольший общий делитель
int gcd(int m, int n)
{
    while (n != 0)
    {
        int tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}

int main(int argc, char const *argv[])
{
    // увеличение произвольного двоичного числа на 1
    int a[8] = {0, 1, 1, 0, 0, 1, 0, 0};
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            break;
        }
        else
        {
            a[i] = 0;
        }
    }

    for (int i = 7; i >= 0; i--)
        printf("%d ", a[i]);

    // перевод числа из двоичной системы в десятичную
    int sum = 0;
    for (size_t i = 0; i < 8; i++)
    {
        sum += a[i] * pow(2, i);
    }

    printf("%d ", sum);

    // вывод двоичного числа в десятичной системе
    for (int i = 7; sum; i--)
    {
        int p = pow(2, i);
        if (sum - p >= 0)
        {
            printf("1 ");
            sum -= p;
        }
        else
        {
            printf("0 ");
        }
    }

    // слияние двух строго монотонных массивов без совпадений
    int a[4] = {1, 5, 7, 9};
    int b[4] = {6, 4, 2, 0};
    int c[8] = {0};

    int i = 0, j = 0, k = 3;
    while (i < 8 && j < 4 && k >= 0)
    {
        if (a[j] < b[k])
        {
            c[i] = a[j];
            j = j + 1;
        }
        else
        {
            c[i] = b[k];
            k = k - 1;
        }
        i = i + 1;
    }

    for (; i < 8; i++)
    {
        if (k >= 0)
        {
            c[i] = b[k];
            k = k - 1;
        }
        else
                {
            c[i] = a[j];
            j = j + 1;
        }
    }

    // для многочлена: Ax^2 + Bx + C = 0
    // массив будет иметь вид: p = [C, B, A]
    // например:
    const unsigned int N = 3;
    // 10 x^2 - 5 x^1 + 19 x^0 = 0
    int p[N] = {19, -5, 10};
    int q[N - 1];
    for (int i = 1; i < 3; i++)
    {
        q[i - 1] = p[i] * i;
    }
    // 20 x^1 - 5 x^0 = 0
}
