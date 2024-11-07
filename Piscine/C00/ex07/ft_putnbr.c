/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:16:33 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 16:48:54 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long int nb_long;
	long int div;
	long int mod;
	char num_char;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long *= -1;
	}
	if (nb_long >= 0 && nb_long <= 9)
	{
		num_char = nb_long + '0';
		ft_putchar(num_char);
	}
	if (nb_long > 9)
	{
		div = nb_long / 10;
		ft_putnbr((int)div);
		mod = nb_long % 10;
		num_char = mod + '0';
		ft_putchar(num_char);
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
//     if (argc != 2)
//     {
//         printf("Usage: %s <nb>\n", argv[0]);
//         return 1;
//     }

//     int nb = atoi(argv[1]);
//     ft_putnbr(nb);
//     write(1, "\n", 1);

//     return 0;
// }