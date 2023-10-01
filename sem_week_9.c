#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// "hello my name is vasya"
// {"hello", "my", "name", "is", "vasya"}

int main(int argc, char const *argv[])
{
    char str[] = "hello, my name is vasya";

    char ** a = malloc(1);

    size_t k = 0;

    char * pch = strtok(str, " ,.-");
    while (pch != NULL)
    {   
        a = realloc(a, (1 + k) * sizeof(char*));
        size_t n = strlen(pch);
        a[k] = malloc(n + 1);
        strcpy(a[k], pch);
        k += 1;
        pch = strtok(NULL, " ,.-");
    }

    for (size_t i = 0; i < k; i++)
    {
        printf("%s\t", a[i]);
    } 
}
