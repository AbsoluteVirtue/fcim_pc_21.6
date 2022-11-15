#include <stdio.h>

unsigned int _strlen(const char *str)
{
    // для определения длины строки достаточно посчитать количество ненулевых элементов, идущих подряд
    unsigned int k = 0;
    unsigned int i = 0;
    // бесконечный цикл:
    for ( ; ; )
    {
        // если найден нулевой элемент, строка закончилась, цикл приостанавливается
        if (str[i] == 0) break;
        k++;
        i++;
    }
    return k;
}

char *_strcpy(char *dest, const char *source)
{
    // для копирования строки в заранее подготовленный "буфер"
    // достаточно скопировать все символы в любой массив с целыми числами, включая терминирующий ноль '\0'
    unsigned int i = 0;
    while ((dest[i] = source[i])) i++;
    //  либо, без использования индексации:
    //  while((*dest++ = *source++));
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
