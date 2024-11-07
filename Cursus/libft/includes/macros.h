/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:47:47 by jewtwo            #+#    #+#             */
/*   Updated: 2024/09/26 13:45:51 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_H

#define MACROS_H
#define SWAP(a, b, T) do { T t = a; a = b; b = t; } while (0)
#define REVERSE_ARRAY(arr, len, T)                         \
    do {                                                   \
        for (size_t i = 0, j = (len) - 1; i < j; i++, j--) {\
            SWAP((arr)[i], (arr)[j], T);                   \
        }                                                  \
    } while (0)
#endif
