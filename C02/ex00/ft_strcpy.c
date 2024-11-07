/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:30:09 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 21:01:41 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void run_test_case(char *src)
// {
// 	char dest_ft[100];
// 	char dest_std[100];

// 	// Copier les chaînes
// 	ft_strcpy(dest_ft, src);
// 	strcpy(dest_std, src);

// 	// Afficher les résultats
// 	printf("Source: '%s'\n", src);
// 	printf("ft_strcpy: '%s'\n", dest_ft);
// 	printf("strcpy:   '%s'\n", dest_std);
// 	printf("\n");
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("Hello, World!");
// 	run_test_case("");
// 	run_test_case("Short");
// 	run_test_case("Exact length string");

// 	return 0;
// }