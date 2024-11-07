/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:44:23 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:12:30 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_INDEX 0

int	ft_fibonacci(int index)
{
	if (index < MIN_INDEX)
		return (-1);
	else if (index == MIN_INDEX)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int main(void)
// {
//     int fibonacci_number;
// 	int	test_index;
// 	test_index = 10;
//     fibonacci_number = ft_fibonacci(test_index);
// 	printf("Le nombre de Fibonacci à l'index %d est %d\n", 
//  test_index, fibonacci_number);
//     return (0);
// }