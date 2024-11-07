/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:21:12 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:13:47 by wifons           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
//     printf("Le prochain nombre premier après %d est %d\n", 
//		2, ft_find_next_prime(2));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		3, ft_find_next_prime(3));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		, ft_find_next_prime(4));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		5, ft_find_next_prime(5));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		6, ft_find_next_prime(6));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		7, ft_find_next_prime(7));
//     printf("Le prochain nombre premier après %d est %d\n", 
//		89, ft_find_next_prime(89));
//     return (0);
// }