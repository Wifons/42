/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:01:54 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 00:49:14 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 'a');
	}
	return (c);
}

void	to_lowercase_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = to_lowercase(str[i]);
		i++;
	}
}

char	to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}

int	is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;
	int	is_lowercase;

	i = 0;
	new_word = 1;
	to_lowercase_str(str);
	while (str[i])
	{
		if (!is_alnum(str[i]))
		{
			new_word = 1;
		}
		else
		{
			is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
			if (new_word && is_lowercase)
			{
				str[i] = to_uppercase(str[i]);
			}
			new_word = 0;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// void run_test_case(char *str)
// {
//     char buffer[100];
//     strcpy(buffer, str);
//     printf("Avant: '%s'\n", str);
//     printf("Après: '%s'\n", ft_strcapitalize(buffer));
//     printf("\n");
// }

// int main(void)
// {
//     // Cas de test
//     run_test_case("hello world");
//     run_test_case("HELLO WORLD");
//     run_test_case("42hello world");
//     run_test_case(" hello-world");
//     run_test_case("");
//     run_test_case("Hello");

//     return 0;
// }