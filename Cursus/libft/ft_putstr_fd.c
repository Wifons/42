/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:09:24 by jewtwo            #+#    #+#             */
/*   Updated: 2024/11/09 19:12:58 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	ssize_t ret;

	if (!s)
		return ;
	ret = write(fd, s, ft_strlen(s));
	(void)ret;
}
