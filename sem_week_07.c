#include <stdio.h>

#define swap(x, y, t) t temp = x; x = y; y = temp;

unsigned long string_length(const char *s) {
    unsigned long n = 0;
    while(*s++) n++;
    return(n);
}

int string_to_int(const char * source)
{
    int res = 0;
    for(int e = 1, i = (int)string_length(source) - 1; i >= 0; i--, e *= 10)
    {
        res += (source[i] - '0') * e;
    }
    return(res);
}

char *string_copy_n(char *new, const char *p, int N)
{
    for (int i = 0; i <= N; i += 1)
    {
        if (!p[i])
            break;

        new[i] = p[i];
    }
    new[N] = '\0';
    return(new);
}

char *string_copy(char *to, const char *from)
{
    char *save = to;
    for (; (*to = *from); ++from, ++to);
    return(save);
}

char *string_reverse(char *str)
{
    int i;
    int j;
    unsigned len = string_length((const char *)str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        swap(str[i], str[j], char)
    }
    return(str);
}

int main(void)
{
    char dest [10] = "125154";
    printf("%s", string_reverse(dest));
}
