/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:41:24 by wifons            #+#    #+#             */
/*   Updated: 2024/09/24 21:44:01 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	base_length;

	i = 0;
	j = 0;
	base_length = ft_strlen(base);
	if (base_length <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(long nbr, char *base)
{
	int	base_length;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_length)
		ft_putnbr_base_recursive(nbr / base_length, base);
	ft_putchar(base[nbr % base_length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (is_valid_base(base))
		ft_putnbr_base_recursive((long)nbr, base);
}

#include <stdio.h>

void run_test(int nbr, char *base)
{
	printf("Number: %d, Base: \"%s\" => Output: ", nbr, base);
	fflush(stdout); // Vider le tampon de sortie standard
	ft_putnbr_base(nbr, base);
	printf("\n");
}

int main()
{
	run_test(42, "0123456789");
	run_test(-42, "0123456789");
	run_test(42, "01");
	run_test(-42, "01");
	run_test(42, "0123456789ABCDEF");
	run_test(-42, "0123456789ABCDEF");
	run_test(42, "poneyvif");
	run_test(-42, "poneyvif");
	run_test(2147483647, "0123456789");
	run_test(-2147483648, "0123456789");
	run_test(0, "0123456789");
	run_test(42, "0");
	run_test(42, "012+3456789");
	run_test(42, "0123456789ABCDEF0123456789");
	return 0;
}