#ifndef FT_H
#define FT_H

#include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void *memset(void *s, int c, size_t n);
size_t ft_strlen(const char *str);

#endif