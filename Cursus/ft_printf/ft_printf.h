#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "../libft/libft.h"

int						ft_printf(const char *format, ...);
ssize_t				ft_putchar(int c);
ssize_t				ft_putstr(char *str);
ssize_t				ft_putnbr(int n);
ssize_t				ft_putunsigned(unsigned int n);
ssize_t				ft_puthex(unsigned int n, int uppercase);
ssize_t				ft_putptr(uintptr_t ptr);
char					*ft_itoa_base(int nbr, int base);

#endif