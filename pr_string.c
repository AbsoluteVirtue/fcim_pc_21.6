// https://codebrowser.dev/linux/linux/lib/string.c.html
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

unsigned long strlenc(const char s[]) {
    unsigned long k = 0;
    for (; s[k] != '\0'; k++);
    return k;
}

size_t strlen(const char *s)
{
	const char *sc;
	for (sc = s; *sc; ++sc);
	return sc - s;
}

void *memset(void *s, int c, size_t count)
{
	char *xs = s;
	while (count--)
		*xs++ = c;
	return s;
}

char *strcpy(char *dest, const char *src)
{
	char *tmp = dest;
	while ((*dest++ = *src++) != '\0');
	return tmp;
}

int main() {

    const char *d = "hello!";

    char b[10];
    memset(b, 0, 10);

    size_t k = strlen(d) + 1;
    for (size_t i = 0; i < k; i++)
    {
        b[i] = d[i];
    }

    // for (size_t i = 0; i < 10; ++i)
    printf("%s %zu", b, strlen(b));


}
