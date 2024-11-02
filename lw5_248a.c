/*
  Необходимо для заданной строки написать функции, которые:
  
  1. Приводит заданную строку к написанию с заглавной буквы, т.е. для ввода "kolbasa" результат: "Kolbasa". Результат вывести на экран.
  2. Изменяет строку таким образом, чтобы все буквы в ней были заглавными, т.е. для ввода "kolbasa" результат: "KOLBASA". Результат вывести на экран.
  3. Изменяет строку таким образом, чтобы все буквы в ней были прописными, т.е. для ввода "KOLBASA" результат: "kolbasa". Результат вывести на экран.
  4. Сравнивает две строки лексикографически и возвращает булевое значение в качестве результата - истину, если первый аргумент меньше второго.
  
  Пример ввода: HeLLo
  Пример вывода: Hello HELLO hello

  Пользоваться стандартными функциями для манипуляции буферов и строк (из файла string.h и т.п.) не разрешается.
*/
#include <assert.h>
#include <stdio.h>

char *capitalize(char*);
char *to_upper(char*);
char *to_lower(char*);
int lexicographical_compare(const char*, const char*);

int main()
{
    char str1[20] = {0};

    scanf("%s", str1);

    printf(capitalize(str1));
    printf(to_upper(str1));
    printf(to_lower(str1));

    char str2[20] = {0};

    scanf("%s", str2);

    assert(lexicographical_compare(str1, str2));
}
