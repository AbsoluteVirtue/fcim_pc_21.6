/*
  Необходимо для заданной строки написать функции, которые:
  
  1. Приводит заданную строку к написанию с заглавной буквы, т.е. для ввода "kolbasa" результат: "Kolbasa". Возвращает результат.
  2. Изменяет строку таким образом, чтобы все буквы в ней были заглавными, т.е. для ввода "kolbasa" результат: "KOLBASA". Возвращает результат.
  3. Изменяет строку таким образом, чтобы все буквы в ней были прописными, т.е. для ввода "KOLBASA" результат: "kolbasa". Возвращает результат.
  4. Меняет содержимое двух строк местами, возвращает результат первый аргумент.
  
  Пример ввода: HeLLo
  Пример вывода: Hello HELLO hello

  Пользоваться стандартными функциями для манипуляции буферов и строк (из файла string.h и т.п.) не разрешается.
*/
#include <assert.h>
#include <stdio.h>

char *capitalize(char*);
char *to_upper(char*);
char *to_lower(char*);
char *swap_strings(char*, char*);

int main()
{
    char str1[20] = {0};

    scanf("%s", str1);

    printf("%s ", capitalize(str1));
    printf("%s ", to_upper(str1));
    printf("%s ", to_lower(str1));

    char str2[20] = {0};
    char str3[20] = {0};

    scanf("%s%s", str2, str3);
    #include <string.h>
    assert(!strcmp(str3, swap_strings(str1, str2)));
}
