/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:28:41 by jewtwo            #+#    #+#             */
/*   Updated: 2024/09/25 15:28:45 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (ft_is_negative(lnb))
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb >= 10)
		ft_putnbr(lnb / 10);
	ft_putchar(lnb % 10 + '0');
}
