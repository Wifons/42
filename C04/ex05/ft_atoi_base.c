/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:08:47 by wifons            #+#    #+#             */
/*   Updated: 2024/09/20 00:27:01 by wifons           ###   ########.fr       */
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

int	is_whitespace(char c)
{
	return (
		c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
	);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	base_length;

	i = 0;
	base_length = ft_strlen(base);
	if (base_length <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_whitespace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	base_value;

	result = 0;
	sign = 1;
	if (!is_valid_base(base))
		return (0);
	while (is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	base_value = get_base_value(*str, base);
	while (base_value != -1)
	{
		result = result * ft_strlen(base) + base_value;
		str++;
		base_value = get_base_value(*str, base);
	}
	return (result * sign);
}

// #include <stdio.h>
// void run_test(char *str, char *base)
// {
// 	printf("Input: \"%s\", Base: \"%s\" => Output: %d\n", 
// 		str, base, ft_atoi_base(str, base));
// }

// int main()
// {
// 	run_test("42", "0123456789");
// 	run_test("   -42", "0123456789");
// 	run_test("101010", "01");
// 	run_test("   -101010", "01");
// 	run_test("2A", "0123456789ABCDEF");
// 	run_test("   -2A", "0123456789ABCDEF");
// 	run_test("vn", "poneyvif");
// 	run_test("   -vn", "poneyvif");
// 	run_test("2147483647", "0123456789");
// 	run_test("-2147483648", "0123456789");
// 	run_test("0", "0123456789");
// 	run_test("42", "0");
// 	run_test("42", "012+3456789");
// 	run_test("42",
// #include <stdio.h>
// void run_test(char *str, char *base)
// {
// 	printf("Input: \"%s\", Base: \"%s\" => Output: %d\n", 
// 		str, base, ft_atoi_base(str, base));
// }

// int main()
// {
// 	run_test("42", "0123456789");
// 	run_test("   -42", "0123456789");
// 	run_test("101010", "01");
// 	run_test("   -101010", "01");
// 	run_test("2A", "0123456789ABCDEF");
// 	run_test("   -2A", "0123456789ABCDEF");
// 	run_test("vn", "poneyvif");
// 	run_test("   -vn", "poneyvif");
// 	run_test("2147483647", "0123456789");
// 	run_test("-2147483648", "0123456789");
// 	run_test("0", "0123456789");
// 	run_test("42", "0");
// 	run_test("42", "012+3456789");
// 	run_test("42", "0123456789ABCDEF0123456789");
// } "0123456789ABCDEF0123456789");
// }