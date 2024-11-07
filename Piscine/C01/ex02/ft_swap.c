/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:43:06 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 19:01:59 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int a;
// 	int b;
//     if (argc != 3)
//     {
//         printf("Utilisation: %s <int:a> <int:b>\n", argv[0]);
//         return (1);
//     }
//     a = atoi(argv[1]);
// 	b = atoi(argv[2]);
//     printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
//     printf("Execution de ft_swap...\n");
//     ft_swap(&a, &b);
//     printf("Execution terminee !\n");
//     printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
//     return (0);
// }