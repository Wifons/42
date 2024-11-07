/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:44:23 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 21:46:39 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_POWER 0

int	ft_recursive_power(int nb, int power)
{
	if (power < MIN_POWER)
		return (0);
	if (power == MIN_POWER)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main(void)
// {
//     int result;
// 	int	test_number;
// 	int test_power;

// 	test_number = 2;
// 	test_power = 9;
//     result = ft_recursive_power(test_number, test_power);
//     printf("%d a la puissance %d est %d\n", test_number, test_power, result);

//     return 0;
// }