/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 04:30:51 by jewtwo            #+#    #+#             */
/*   Updated: 2024/10/02 22:23:53 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	int	ft_islower(int c)
	{
		return (unsigned)c - 'a' < 26;
	}
	