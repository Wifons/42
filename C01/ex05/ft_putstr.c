/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:42:59 by wifons            #+#    #+#             */
/*   Updated: 2024/09/12 18:47:35 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Utilisation: %s <char:str>\n", argv[0]);
		return (1);
	}
	char *str = argv[1];
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}