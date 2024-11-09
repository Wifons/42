/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewtwo <jewtwo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:55:42 by jewtwo            #+#    #+#             */
/*   Updated: 2024/11/09 17:38:09 by jewtwo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t		count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t finish)
{
	char	*word;

	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, finish - start + 1);
	return (word);
}

static void free_split(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(split[i++]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		i;
	size_t		j;
	int		index;

	if (!s)
		return (NULL);
	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = word_dup(s, index, i);
			if (!split[j++])
			{
				free_split(split, j - 1);
				return (NULL);
			}
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}