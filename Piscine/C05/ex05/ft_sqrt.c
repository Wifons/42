/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:47:39 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:13:05 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int square_root;
// 	int test_number;
// 	test_number = 16;
//     square_root = ft_sqrt(test_number);
//     printf("La racine carrée de %d est %d\n", 
//	   test_number, square_root);
//     return 0;
// }