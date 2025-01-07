#include "ft_printf.h"

static char	ft_get_char(int value)
{
	if (value >= 10)
		return ('A' + (value - 10));
	return ('0' + value);
}

static unsigned int	ft_get_abs(int nbr, int *is_negative, int base)
{
	if (nbr < 0 && base == 10)
	{
		*is_negative = 1;
		return (-nbr);
	}
	*is_negative = 0;
	return (nbr);
}

static int	ft_nblen_base(unsigned int number, int base, int is_negative)
{
	int	len;

	len = 1;
	while (number >= (unsigned int)base)
	{
		number /= base;
		len++;
	}
	return (len + is_negative);
}

char	*ft_itoa_base(int nbr, int base)
{
	char					*result;
	unsigned int	number;
	int						len;
	int						is_negative;

	if (base < 2 || base > 16)
		return (NULL);
	number = ft_get_abs(nbr, &is_negative, base);
	len = ft_nblen_base(number, base, is_negative);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > is_negative)
	{
		result[--len] = ft_get_char(number % base);
		number /= base;
	}
	if (is_negative && base == 10)
		result[0] = '-';
	return (result);
}