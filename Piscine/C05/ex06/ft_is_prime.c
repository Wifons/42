/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:18:38 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 21:22:51 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_PRIME 2

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < MIN_PRIME)
		return (0);
	i = MIN_PRIME;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	test_value;
//     int is_prime;

// 	test_value = 52;
//     is_prime = ft_is_prime(test_value);
//     if (is_prime)
//         printf("%d est un nombre premier\n", test_value);
//     else
//         printf("%d n'est pas un nombre premier\n", test_value);

//     return 0;
// }