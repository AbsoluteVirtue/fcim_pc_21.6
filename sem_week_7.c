#include <stdio.h>

unsigned int _strlen(const char *str)
{
    unsigned int k = 0;
    unsigned int i = 0;
    for ( ; ; )
    {
        if (str[i] == 0) break;
        k++;
        i++;
    }
    return k;
}

char *_strcpy(char *dest, const char *source)
{
    unsigned int i = 0;
    while ((dest[i] = source[i])) i++;
    return dest;
}

int main(int argc, char const *argv[])
{
    // строки можно инициализировать как указатели
    const char * x = "hello!\0";
    printf("%d ", _strlen(x));
    // строки можно инициализировать как массивы
    char y[10] = {0};
    printf(" %s = %s ", _strcpy(y, x), x);
    // так как строки являются особым видом массива
    // с ними можно обращаться как с массивами символов
    for (size_t i = 0; i < _strlen(x); i++)
    {
        printf("%c", x[i]);
    }

    char z [13] = "hello world!";
    for (size_t i = 0; i < _strlen(z); i++)
    {
        if(z[i] == ' ') z[i] = '-';
    }
    printf(" %s", z);
}
