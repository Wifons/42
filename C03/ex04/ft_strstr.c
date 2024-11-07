/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wifons <wifons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:12:05 by wifons            #+#    #+#             */
/*   Updated: 2024/09/19 19:43:58 by wifons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_to_find;
	int	i;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	len_to_find = ft_strlen(to_find);
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, len_to_find) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
