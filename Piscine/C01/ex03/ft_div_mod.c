/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:43:04 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 18:59:25 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	if (argc != 3)
// 	{
// 		printf("Utilisation: %s <int:a> <int:b>\n", argv[0]);
// 		return (1);	
// 	}
// 	int a = atoi(argv[1]);
// 	int b = atoi(argv[2]);
// 	int div = 0;
// 	int mod = 0;
// 	printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
// 	printf("Valeur de div: %d\n", div);
// 	printf("Valeur de mod: %d\n", mod);
// 	printf("Execution de ft_div_mod...");
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
// 	printf("Valeur de div: %d\n", div);
// 	printf("Valeur de mod: %d\n", mod);
// 	return (0);
// }