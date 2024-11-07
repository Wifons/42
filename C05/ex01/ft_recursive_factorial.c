/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:27:36 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 21:35:47 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_FACTORIAL_INPUT 0

int	ft_recursive_factorial(int nb)
{
	if (nb < MIN_FACTORIAL_INPUT)
		return (0);
	if (nb == MIN_FACTORIAL_INPUT)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(void)
// {
//     int factorial;
// 	int test_number;

// 	test_number = 5;
//     factorial = ft_recursive_factorial(test_number);
//     printf("La factorielle de %d est %d\n", test_number, factorial);

//     return (0);
// }
