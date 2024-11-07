/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:29:28 by wifons            #+#    #+#             */
/*   Updated: 2024/09/26 19:43:48 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char *test = "test";
// 	ft_putstr(test);
// 	write(1, "\n", 1);
// 	return (0);
// }