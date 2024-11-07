/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:01:58 by jewtwo            #+#    #+#             */
/*   Updated: 2024/09/30 22:20:49 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
    ssize_t ret = write(1, &c, 1);
    if (ret == -1) {
        // Handle the error appropriately, e.g., log it or exit
    }}
