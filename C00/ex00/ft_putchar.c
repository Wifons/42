/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:00:31 by wifons            #+#    #+#             */
/*   Updated: 2024/09/10 16:20:11 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <char>\n", argv[0]);
// 		return 1;
// 	}
// 	char c = argv[1][0];
// 	ft_putchar(c);
// 	write(1, "\n", 1);
// 	return 0;
// }
