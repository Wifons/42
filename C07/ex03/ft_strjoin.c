/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:02:16 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 01:07:03 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	calc_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	ft_strcpy(&dest[i], src);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_len = calc_total_len(size, strs, sep) + 1;
	result = malloc(total_len);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i++ < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char *result;
//     char *strs[] = {"Hello", "world", "42", "students"};
//     int size = 4;
//     char *sep = " ";
//     result = ft_strjoin(size, strs, sep);
//     if (result)
//     {
//         printf("Résultat: %s\n", result);
//         free(result); // Libérer la mémoire allouée
//     }
//     else
//     {
//         printf("Erreur d'allocation mémoire.\n");
//     }
//     return 0;
// }