/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:44 by wifons            #+#    #+#             */
/*   Updated: 2024/11/08 15:37:16 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if ((dest == NULL || src == NULL) && n > 0)
		return (0);
	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_src++;
	return (dest);
}