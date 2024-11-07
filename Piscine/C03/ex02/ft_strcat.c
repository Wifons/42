/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:58:28 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 19:41:56 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_i;

	dest_len = ft_strlen(dest);
	src_i = 0;
	while (src[src_i])
	{
		dest[dest_len] = src[src_i];
		dest_len++;
		src_i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
