/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:59:35 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 20:00:38 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	int		tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int		size;
// 	int 	i;

// 	size = 10;
// 	i = 0;
// 	printf("Valeur de tab: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\nExecution de ft_rev_int_tab...\n");
// 	ft_rev_int_tab(tab, size);
// 	printf("Execution terminee !\n");
// 	printf("Valeur de tab: ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }