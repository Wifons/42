/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:40:49 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 18:43:15 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int a, int b)
{
	char	a_ten;
	char	a_unit;
	char	b_ten;
	char	b_unit;

	a_ten = a / 10 + '0';
	a_unit = a % 10 + '0';
	b_ten = b / 10 + '0';
	b_unit = b % 10 + '0';
	ft_putchar(a_ten);
	ft_putchar(a_unit);
	ft_putchar(' ');
	ft_putchar(b_ten);
	ft_putchar(b_unit);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	write(1, "\n", 1);
// 	return (0);
// }