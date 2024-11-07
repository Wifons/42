/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:42:55 by wifons            #+#    #+#             */
/*   Updated: 2024/09/11 19:04:05 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Utilisation: %s <char:str>\n", argv[0]);
// 		return (1);
// 	}
// 	char *str = argv[1];
// 	int result = ft_strlen(str);
// 	printf("Le mot %s contient %d caracteres\n", str, result);
// 	return (0);
// }