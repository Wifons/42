/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:02:01 by wifons            #+#    #+#             */
/*   Updated: 2024/09/20 00:27:27 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// void run_test(char *str)
// {
// 	printf("String: '%s' | Length: %d\n", str, ft_strlen(str));
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