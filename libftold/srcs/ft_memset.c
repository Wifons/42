#include "../includes/ft.h"

void *memset(void *s, int c, size_t n)
{
	char *str;
	size_t i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}