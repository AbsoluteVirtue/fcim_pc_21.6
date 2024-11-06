/*
  Необходимо для заданной строки написать функции, которые:
  
  1. Приводит заданную строку к написанию с заглавной буквы, т.е. для ввода "kolbasa" результат: "Kolbasa". Результат вывести на экран.
  2. Изменяет строку таким образом, чтобы все буквы в ней были заглавными, т.е. для ввода "kolbasa" результат: "KOLBASA". Результат вывести на экран.
  3. Изменяет строку таким образом, чтобы все буквы в ней были прописными, т.е. для ввода "KOLBASA" результат: "kolbasa". Результат вывести на экран.
  4. Меняет содержимое двух строк местами, возвращает первый аргумент.
  
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

    scanf("%s", str2);
    #include <string.h>
    assert(!strcmp(str2, swap_strings(str1, str2)));
}
