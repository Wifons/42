/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:24:10 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 00:49:40 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_print_hex(unsigned char c)
{
	char	*hex_digits;
	int		hex_base;

	hex_digits = "0123456789abcdef";
	hex_base = 16;
	ft_putchar(hex_digits[c / hex_base]);
	ft_putchar(hex_digits[c % hex_base]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_print_hex(str[i]);
		}
		i++;
	}
}
// #include <stdio.h>

// void run_test_case(char *str)
// {
// 	printf("Input: \"%s\"\n", str);
// 	ft_putstr_non_printable(str);
// 	printf("\n\n");
// }

// int main(void)
// {
// 	// Cas de test
// 	run_test_case("Hello, World!");
// 	run_test_case("Hello\nWorld");
// 	run_test_case("Non-printable: \x01\x02\x03");
// 	run_test_case("");
// 	run_test_case("wtf\x1F");
// 	run_test_case("Some\0arandom\09text\0fwith\0anon-printable\0dcharacters");
// 	return 0;
// }