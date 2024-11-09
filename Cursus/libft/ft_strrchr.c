/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:10:31 by wifons            #+#    #+#             */
/*   Updated: 2024/11/09 01:37:31 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurence = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last_occurence = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_occurence);
}
