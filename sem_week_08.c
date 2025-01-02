#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_alphanum(char);

int main(void)
{
    // FILE *f = fopen("census.csv", "r");
    // if (!f) return EXIT_FAILURE;

    // int c;
    // while ((c = fgetc(f)) != EOF) putchar(c);

    // fclose(f);

    char s1[100] = "hello, my dear friends!";

    size_t n = 0;
    for (size_t i = 0; s1[i]; i++)
    {
        // if (is_alphanum(c)) printf("%c", c);
        if (!is_alphanum(s1[i]))
        {
            n++;
            while (s1[i] && !is_alphanum(s1[i]))
            {
                i++;
            }
        }
    }

    const char *delim = ", !";
    for (char *token = strtok(s1, delim); token; token = strtok(NULL, delim))
    {
        printf("%s ", token);
    }
}

int is_alphanum(char c)
{
    // return(__ctype_ptr__[c+1] & (_U|_L|_N));
    return (
        ('A' <= c && 'Z' >= c) ||
        ('a' <= c && 'z' >= c) ||
        ('0' <= c && '9' >= c)
    );
}
