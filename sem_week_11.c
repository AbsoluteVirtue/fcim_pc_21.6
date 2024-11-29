#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

typedef int i32;
typedef char * string;

typedef struct {
    i32 date;
    string name;
} rows;

int main() {

    const size_t count = 3;

    rows table[count];

    size_t k = 0;
    for (size_t i = 0; i < count; i++)
    {
        char buf[80] = {0};
        scanf("%s", buf);
        size_t len = strlen(buf);
        char *tmp = malloc(len + 1);
        table[i].name = strcpy(tmp, buf);
        if (len >= 3) {
            k++;   
        }
    }
    
    rows *new_table = calloc(k, sizeof(rows));
    for (size_t i = 0, j = 0; i < count; i++)
    {
        size_t len = strlen(table[i].name);
        if (len >= 3) {
            new_table[j].date = table[i].date;

            size_t len = strlen(table[i].name);
            new_table[j].name = malloc(len + 1);
            strcpy(new_table[j].name, table[i].name);

            ++j;
        }
    }

    for (size_t i = 0; i < k; i++)
    {
        new_table[i].name[0] = tolower(new_table[i].name[0]);
        printf("%s ", new_table[i].name);
    }
}
