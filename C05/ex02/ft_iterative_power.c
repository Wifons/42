/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:27:33 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:11:52 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_POWER 0

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < MIN_POWER)
		return (0);
	if (power == MIN_POWER)
		return (1);
	result = 1;
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     int result;
// 	int	test_number;
// 	int test_power;

// 	test_number = 2;
// 	test_power = 9;
//     result = ft_iterative_power(test_number, test_power);
//     printf("%d a la puissance %d est %d\n", test_number, test_power, result);

//     return 0;
// }