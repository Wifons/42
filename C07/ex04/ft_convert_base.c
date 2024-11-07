/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:45:59 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 00:50:52 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nbr, char *base);
int		ft_strlen(char *src);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	char	*result;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	nbr_int = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(nbr_int, base_to);
	return (result);
}

unsigned int	ft_get_num_digits(unsigned int num, int base_len)
{
	unsigned int	digits;

	digits = 0;
	if (num == 0)
		digits = 1;
	while (num)
	{
		num /= base_len;
		digits++;
	}
	return (digits);
}

void	fill_result_base(char *result, unsigned int num,
char *base, int len)
{
	int	base_len;

	base_len = ft_strlen(base);
	while (len > 0)
	{
		result[--len] = base[num % base_len];
		num /= base_len;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	int				base_len;
	int				sign;
	char			*result;
	unsigned int	num;
	int				len;

	base_len = ft_strlen(base);
	sign = 1;
	num = nbr;
	if (nbr < 0)
		sign = -1;
	if (nbr < 0)
		num = -nbr;
	len = ft_get_num_digits(num, base_len) + (sign == -1);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[--len] = base[0];
	else
		fill_result_base(result, num, base, len);
	if (sign == -1)
		result[0] = '-';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char *result1 = ft_convert_base("42", "0123456789", "01");
//     printf("Decimal 42 en binaire: %s\n", result1);
//     free(result1);
// }