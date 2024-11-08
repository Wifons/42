/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:34:14 by jewtwo            #+#    #+#             */
/*   Updated: 2024/11/08 18:44:12 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char				*dest_new;
	const unsigned char	*src_new;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		dest_new = (unsigned char *)dest;
		src_new = (const unsigned char *)src;
		while (n--)
			*dest_new++ = *src_new++;
	}
	else
	{
		dest_new = (unsigned char *)dest + (n - 1);
		src_new = (const unsigned char *)src + (n - 1);
		while (n--)
			*dest_new-- = *src_new--;
	}
	return (dest);
}