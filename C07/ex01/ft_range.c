/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:56:50 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 01:01:42 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int main(void)
// {
//     int min = 5;
//     int max = 10;
//     int *range;
//     int i;

//     range = ft_range(min, max);
//     if (range)
//     {
//         i = 0;
//         while (i < (max - min))
//         {
//             printf("%d ", range[i]);
//             i++;
//         }
//         printf("\n");
//         free(range);
//     }
//     else
//     {
//         printf("ft_range a retourné NULL.\n");
//     }

//     return 0;
// }