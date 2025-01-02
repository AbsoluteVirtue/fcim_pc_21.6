#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_alphanum(char);
char *to_lower(const char*);

int main(void)
{
    FILE *fp = fopen("census.csv", "r");
    if (!fp) return EXIT_FAILURE;

    // int c;
    // while ((c = fgetc(fp)) != EOF) putchar(c);

    char s1[1000] = {0};
    fgets(s1, 1000, fp);

    fclose(fp);

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

    char **a = calloc(n, sizeof(char*));

    size_t i = 0;
    const char *delim = ", !";
    for (char *token = strtok(s1, delim); token; token = strtok(NULL, delim))
    {
        printf("%s ", token);
        char *tmp = malloc(strlen(token) + 1);
        strcpy(tmp, token);
        a[i++] = tmp;
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

char* to_lower(char *s) {
    for (size_t i = 0; s[i] != '\0'; i++)
    {
        if ('A' <= s[i] && 'Z' >= s[i])
            s[i] += ('Z' - 'A') + ('a' - 'Z');
    }
    return(s);
}
