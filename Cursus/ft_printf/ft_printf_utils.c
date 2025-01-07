#include "ft_printf.h"

ssize_t	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

ssize_t	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}

ssize_t	ft_putnbr(int n)
{
	char	*str;
	ssize_t len;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}

ssize_t	ft_putunsigned(unsigned int n)
{
	char	*str;
	ssize_t		len;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}

ssize_t	ft_puthex(unsigned int n)
{
	char		*str;
	ssize_t	len;

	str = ft_itoa_base(n, 16);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}

ssize_t	ft_putptr(uintptr_t ptr)
{
	char		*str;
	ssize_t	len;

	if (ft_putstr("0x") == -1)
		return (-1);
	if (ptr == 0)
		return (ft_putchar('0'));
	str = ft_itoa_base(ptr, 16);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len + 2);
}