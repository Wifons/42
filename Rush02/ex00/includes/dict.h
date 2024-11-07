/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:44:48 by ezeppa            #+#    #+#             */
/*   Updated: 2024/09/21 16:05:29 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# define DICT_PATH "./numbers.dict"

#include <fcntl.h>

struct s_key_value_pair;

typedef struct s_key_value_pair
{
	char					*key;
	char					*value;
	struct s_key_value_pair	*next;
} key_value_pair;

typedef struct s_dico
{
	char			*selected_path;
	key_value_pair	*first;
} dico;

#endif
