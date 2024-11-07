/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:49:49 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 19:53:09 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
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
// 	int result = ft_str_is_printable(str);
// 	printf("Chaine: '%s' -> Resultat: %d\n", str, result);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("Hello, World!");
// 	run_test_case("Hello\nWorld");
// 	run_test_case("");
// 	run_test_case("Printable123");
// 	run_test_case("Non-printable\x01\x02");

// 	return 0;
// }