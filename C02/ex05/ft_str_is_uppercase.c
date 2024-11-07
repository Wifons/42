/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:46:33 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 19:53:14 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_uppercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// void run_test_case(char *str)
// {
// 	int result = ft_str_is_uppercase(str);
// 	printf("Chaine: '%s' -> Resultat: %d\n", str, result);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("HELLO");
// 	run_test_case("Hello");
// 	run_test_case("");
// 	run_test_case("WORLD");
// 	run_test_case("UPPERCASE");

// 	return 0;
// }