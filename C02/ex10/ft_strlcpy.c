/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:28:07 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 00:47:17 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// void run_test_case(char *src, size_t size)
// {
// 	char dest_ft[100];
// 	char dest_std[100];

// 	// Initialiser les buffers avec des valeurs connues
// 	memset(dest_ft, 'A', sizeof(dest_ft));
// 	memset(dest_std, 'A', sizeof(dest_std));

// 	// Copier les chaînes
// 	// size_t result_ft = ft_strlcpy(dest_ft, src, size);
// 	size_t result_std = strlcpy(dest_std, src, size);

// 	// Afficher les résultats
// 	printf("Source: '%s', size: %zu\n", src, size);
// 	printf("ft_strlcpy: '%s', return: %zu\n", dest_ft, result_ft);
// 	printf("strlcpy:   '%s', return: %zu\n", dest_std, result_std);
// 	printf("\n");
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("Hello, World!", 5);
// 	run_test_case("Hello, World!", 20);
// 	run_test_case("", 5);
// 	run_test_case("Short", 10);
// 	run_test_case("Exact length string", 17);

// 	return 0;
// }