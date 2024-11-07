/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:06:00 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 19:43:24 by wifons           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	src_i;

	dest_len = ft_strlen(dest);
	src_i = 0;
	while (src[src_i] && src_i < nb)
	{
		dest[dest_len] = src[src_i];
		dest_len++;
		src_i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
