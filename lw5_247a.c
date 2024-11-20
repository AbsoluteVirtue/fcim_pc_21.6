/*
  Необходимо для заданной строки написать функции, которые:

  1. Приводит заданную строку к написанию с заглавной буквы, т.е. для ввода "kolbasa" результат: "Kolbasa". Возвращает результат.
  2. Изменяет строку таким образом, чтобы все буквы в ней были заглавными, т.е. для ввода "kolbasa" результат: "KOLBASA". Возвращает результат.
  3. Изменяет строку таким образом, чтобы все буквы в ней были прописными, т.е. для ввода "KOLBASA" результат: "kolbasa". Возвращает результат.
  4. Определяет самую длинную строку из заданных.

  Пример ввода: HeLLo 3 algae bark coral
  Пример вывода: Hello HELLO hello algae

  Пользоваться стандартными функциями для манипуляции буферов и строк (из файла string.h и т.п.) не разрешается.
*/
#include <assert.h>
#include <stdio.h>

char *capitalize(char *);
char *to_upper(char *);
char *to_lower(char *);
char *longest_str(char *strings[]);

int main()
{
	char str1[20] = {0};

	scanf("%s", str1);

	printf("%s ", capitalize(str1));
	printf("%s ", to_upper(str1));
	printf("%s ", to_lower(str1));

	size_t n = 0;
	scanf("%zu", &n);
	const size_t count = n;
	char *words[count];
	for (size_t i = 0; i < count; i++)
	{
		// заполнить массив строками здесь
	}
	printf("%s ", longest_str(words));
}
