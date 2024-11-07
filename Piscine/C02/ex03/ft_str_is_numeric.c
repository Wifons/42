/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:10:59 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 21:03:36 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_numeric(str[i]))
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
// 	int result = ft_str_is_numeric(str);
// 	printf("Chaine: '%s' -> Resultat: %d\n", str, result);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("123456");
// 	run_test_case("123a456");
// 	run_test_case("");
// 	run_test_case("0000");
// 	run_test_case("42");
// 	run_test_case("abcdef");

// 	return 0;
// }