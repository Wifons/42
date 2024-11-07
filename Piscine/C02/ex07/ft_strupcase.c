/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:02:01 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 20:02:02 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	to_uppercase(char c)
{
	if (is_lowercase(c))
	{
		return (c - 'a' + 'A');
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = to_uppercase(str[i]);
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// void run_test_case(char *str)
// {
// 	char buffer[100];
// 	strcpy(buffer, str);
// 	ft_strupcase(buffer);
// 	printf("Original: '%s' -> Uppercase: '%s'\n", str, buffer);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("hello");
// 	run_test_case("Hello");
// 	run_test_case("");
// 	run_test_case("world");
// 	run_test_case("lowercase");
// 	run_test_case("MIXEDcase123");

// 	return 0;
// }