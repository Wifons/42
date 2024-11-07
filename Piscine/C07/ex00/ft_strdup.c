/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:47:56 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 00:56:43 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

// #include <stdio.h>
// int main(void)
// {
//     char *src = "Hello, 42!";
//     char *dup;

//     dup = ft_strdup(src);
//     if (dup)
//     {
//         printf("Original: %s\n", src);
//         printf("Duplicate: %s\n", dup);
//         free(dup);
//     }
//     else
//     {
//         printf("Échec de l'allocation mémoire.\n");
//     }
//     return (0);
// }