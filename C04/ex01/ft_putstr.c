/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:02:04 by wifons            #+#    #+#             */
/*   Updated: 2024/09/20 00:27:24 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

// #include <stdio.h>

// void run_test(char *str)
// {
// 	printf("String: '%s'\n", str);
// 	ft_putstr(str);
// 	printf("\n");
// }

// int main(void)
// {
// 	run_test("Hello, World!");
// 	run_test("");
// 	run_test("42");
// 	run_test("This is a longer string to test the function.");
// 	run_test("Special characters: !@#$%^&*()_+");
// 	run_test("1234567890");
// 	return 0;
// }