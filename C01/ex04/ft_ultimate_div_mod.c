/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:43:01 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 19:02:45 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
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
// 	printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
// 	printf("Execution de la fonction ft_ultimate_ft...\n");
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Valeur de a: %d\n", a);
// 	printf("Valeur de b: %d\n", b);
// }