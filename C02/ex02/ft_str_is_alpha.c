/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:21:31 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 21:03:12 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *test_cases[] = {
// 			"HelloWorld",	 // Alphabetique
// 			"",						 // Chaine vide
// 			"Hello",			 // Alphabetique
// 			"Hello123",		 // Mixte
// 			"Hello World", // Non alphabetique
// 			NULL					 // Fin des tests
// 	};

// 	for (int i = 0; test_cases[i] != NULL; i++)
// 	{
// 		int result = ft_str_is_alpha(test_cases[i]);
// 		printf("Chaine: '%s' -> Resultat: %d\n", test_cases[i], result);
// 	}

// 	return 0;
// }