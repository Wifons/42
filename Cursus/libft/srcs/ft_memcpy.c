/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:44 by wifons            #+#    #+#             */
/*   Updated: 2024/11/08 16:50:10 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_new;
	const unsigned char	*src_new;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dest_new = (unsigned char *)dest;
	src_new = (const unsigned char *)src;
	i = 0;
	while (i++ < n)
		*dest_new++ = *src_new++;
	return (dest);
}