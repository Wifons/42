/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:50:39 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 23:56:49 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>	

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		str_len;
	int		i;

	str_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * str_len + 1);
	i = 0;
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			while (i > 0)
				free(arr[--i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     char *strings[] = {"Hello", "World", "Test", NULL};
//     t_stock_str *result;
//     int i;

//     result = ft_strs_to_tab(3, strings);
//     if (!result)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     i = 0;
//     while (i < 3)
//     {
//         printf("Original: %s, Copy: %s, Size: %d\n", result[i].str, 
//			result[i].copy, result[i].size);
//         i++;
//     }
//     i = 0;
//     while (i < 3)
//     {
//         free(result[i].copy);
//         i++;
//     }
//     free(result);
//     return (0);
// }