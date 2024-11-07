#ifndef FT_H
#define FT_H

#include <stdlib.h>
#include <unistd.h>
#include "macros.h"

typedef struct s_base_info {
	int is_valid;
	int length;
	char *base;
}	t_base_info;

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t		ft_strlen(const char *str);
int	ft_isalpha(int c);
int	ft_is_numeric(char c);
int ft_islower(int c);
int	ft_isupper(int c);
int	ft_toupper(int c);
int	ft_is_space(char c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_is_negative(int nb);

#endif