#ifndef FT_H
#define FT_H

#include <stdlib.h>
#include <unistd.h>
#include "macros.h"

// typedef struct s_base_info {
// 	int is_valid;
// 	int length;
// 	char *base;
// }	t_base_info;

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif