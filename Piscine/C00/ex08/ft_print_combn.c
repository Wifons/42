/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:43:20 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 16:56:08 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	print_combination(int combination[], int num_digits)
// {
// 	char	digit_char;
// 	int		i;
// 	int		max_first_digit;

// 	i = 0;
// 	while (i < num_digits)
// 	{
// 		digit_char = combination[i] + '0';
// 		write(1, &digit_char, 1);
// 		i++;
// 	}
// 	max_first_digit = 10 - num_digits;
// 	if (combination[0] != max_first_digit)
// 	{
// 		write(1, ", ", 2);
// 	}
// }

// void	generate_combinations(int combination[], int num_digits,
// int current_index, int start_digit)
// {
// 	int		digit;

// 	digit = start_digit;
// 	if (current_index == num_digits)
// 	{
// 		print_combination(combination, num_digits);
// 		return ;
// 	}
// 	while (digit <= 9)
// 	{
// 		combination[current_index] = digit;
// 		generate_combinations(combination, num_digits,
// 			current_index + 1, digit + 1);
// 		digit++;
// 	}
// }

// void	ft_print_combn(int num_digits)
// {
// 	int		combination[10];

// 	if (num_digits <= 0 || num_digits >= 10)
// 	{
// 		return ;
// 	}
// 	generate_combinations(combination, num_digits, 0, 0);
// }

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <num_digits>\n", argv[0]);
        return 1;
    }

    int num_digits = atoi(argv[1]);
    ft_print_combn(num_digits);
    write(1, "\n", 1);

    return 0;
}