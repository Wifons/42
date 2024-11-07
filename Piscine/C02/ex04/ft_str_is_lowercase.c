/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:28:54 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 21:04:12 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!is_lowercase(str[i]))
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
// 	int result = ft_str_is_lowercase(str);
// 	printf("Chaine: '%s' -> Resultat: %d\n", str, result);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("hello");
// 	run_test_case("Hello");
// 	run_test_case("");
// 	run_test_case("WORLD");
// 	run_test_case("lowercase");

// 	return 0;
// }