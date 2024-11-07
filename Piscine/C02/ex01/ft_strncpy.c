/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:22:40 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 01:13:27 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// void run_test_case(char *src, size_t n)
// {
// 	char dest_ft[100];
// 	char dest_std[100];

// 	// Initialiser les buffers avec des valeurs connues
// 	memset(dest_ft, 'A', sizeof(dest_ft));
// 	memset(dest_std, 'A', sizeof(dest_std));

// 	// Copier les chaînes
// 	ft_strncpy(dest_ft, src, n);
// 	strncpy(dest_std, src, n);

// 	// Null-terminate les chaînes
// 	dest_ft[n] = '\0';
// 	dest_std[n] = '\0';

// 	// Afficher les résultats
// 	printf("Source: '%s', n: %zu\n", src, n);
// 	printf("ft_strncpy: '%s'\n", dest_ft);
// 	printf("strncpy:   '%s'\n", dest_std);
// 	printf("\n");
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("Hello, World!", 5);
// 	run_test_case("Hello, World!", 20);
// 	run_test_case("", 5);
// 	run_test_case("Short", 10);
// 	run_test_case("Exact", 5);

// 	return 0;
// }