/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:21:03 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:11:17 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_FACTORIAL_INPUT 0

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	cur_nb;

	total = MIN_FACTORIAL_INPUT + 1;
	cur_nb = MIN_FACTORIAL_INPUT + 1;
	if (nb < 0)
		return (0);
	while (cur_nb <= nb)
	{
		total *= cur_nb;
		cur_nb++;
	}
	return (total);
}

// #include <stdio.h>
// int main(void)
// {
//     int factorial;
// 	int	test_number;
// 	test_number = 5;
//     factorial = ft_iterative_factorial(test_number);
//     printf("La factorielle de %d est %d\n", test_number, factorial);
//     return 0;
// }