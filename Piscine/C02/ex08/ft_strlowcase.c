/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:01:58 by wifons            #+#    #+#             */
/*   Updated: 2024/09/18 20:01:59 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	to_lowercase(char c)
{
	if (is_uppercase(c))
	{
		return (c - 'A' + 'a');
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = to_lowercase(str[i]);
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
// 	ft_strlowcase(buffer);
// 	printf("Original: '%s' -> Lowercase: '%s'\n", str, buffer);
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("HELLO");
// 	run_test_case("Hello");
// 	run_test_case("");
// 	run_test_case("WORLD");
// 	run_test_case("lowercase");

// 	return 0;
// }