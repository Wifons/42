/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 01:07:20 by wifons            #+#    #+#             */
/*   Updated: 2024/09/25 20:54:02 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		if (c == sep[i++])
			return (1);
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words_count;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep))
		{
			words_count++;
			while (str[i] && !is_separator(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words_count);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_separator(str[i], sep))
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * count_words(str, charset) + 1);
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_separator(str[i], charset))
		{
			words[j] = word_splitter(&str[i], charset);
			while (str[i] && !is_separator(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "Words to.be+splitted";
// 	char *sep = " .+";
// 	char **words = ft_split(str, sep);
// 	int	i = 0;

// 	printf("Avant: %s\nApres:\n", str);
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// }