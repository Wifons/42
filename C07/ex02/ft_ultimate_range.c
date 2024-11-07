/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:52:12 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 01:02:09 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
//     int *range;
//     int size;
//     int i;
//     int min = 5;
//     int max = 10;

//     size = ft_ultimate_range(&range, min, max);
//     if (size > 0)
//     {
//         printf("La plage contient %d éléments:\n", size);
//         i = 0;
//         while (i < size)
//         {
//             printf("%d ", range[i]);
//             i++;
//         }
//         printf("\n");
//         free(range); // Libérer la mémoire allouée
//     }
//     else if (size == 0)
//     {
//         printf("Min est supérieur ou égal à max. Aucune plage générée.\n");
//     }
//     else
//     {
//         printf("Échec de l'allocation mémoire.\n");
//     }

//     return 0;
// }
