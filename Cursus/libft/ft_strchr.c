/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:03:09 by wifons            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/12/13 15:45:47 by wifons           ###   ########.fr       */
=======
/*   Updated: 2024/11/09 20:16:55 by jewtwo           ###   ########.fr       */
>>>>>>> e38304fc4deb9df563c297fb403e792db7dae4b7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
<<<<<<< HEAD
	if (c == '\0')
=======
	if ((char)c == '\0')
>>>>>>> e38304fc4deb9df563c297fb403e792db7dae4b7
		return ((char *)s);
	return (NULL);
}
