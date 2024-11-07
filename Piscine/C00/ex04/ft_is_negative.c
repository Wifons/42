/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:29:46 by wifons            #+#    #+#             */
/*   Updated: 2024/09/12 18:25:59 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
//     if (argc != 2)
//     {
//         printf("Usage: %s <n>\n", argv[0]);
//         return 1;
//     }

//     int n = atoi(argv[1]);
//     ft_is_negative(n);
//     write(1, "\n", 1);

//     return 0;
// }