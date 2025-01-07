
#include "ft_printf.h"

static int	process_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (specifier == 'p')
		return (ft_putptr((uintptr_t)va_arg(args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (specifier == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int			i;
	int			printed;

	va_start(args, format);
	i = 0;
	printed = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed += process_format(format[i + 1], args);
			i++;
		}
		else
			printed += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed);
}

