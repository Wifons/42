/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:25:43 by wifons            #+#    #+#             */
/*   Updated: 2024/09/23 22:15:12 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BOARD_SIZE 10

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

int	ft_check_place(int pos[BOARD_SIZE], int occupied_rows, int column)
{
	int	i;

	i = 0;
	while (i < occupied_rows)
	{
		if (pos[i] == column
			|| ft_abs(pos[i] - column) == ft_abs(i - occupied_rows))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print(int pos[BOARD_SIZE])
{
	int		i;
	char	c;

	i = 0;
	while (i < BOARD_SIZE)
	{
		c = pos[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_solve(int pos[BOARD_SIZE], int occupied_rows, int *count)
{
	int	i;

	if (occupied_rows == BOARD_SIZE)
	{
		ft_print(pos);
		*count += 1;
	}
	else
	{
		i = 0;
		while (i < BOARD_SIZE)
		{
			if (ft_check_place(pos, occupied_rows, i))
			{
				pos[occupied_rows] = i;
				ft_solve(pos, occupied_rows + 1, count);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	pos[BOARD_SIZE];
	int	count;

	count = 0;
	ft_solve(pos, 0, &count);
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	solutions;

// 	solutions = ft_ten_queens_puzzle();
// 	printf("Total solutions: %d\n", solutions);
// 	return (0);
// }
