/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:45:53 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/10 19:17:22 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			++count;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

static char	**split_words(char const *s, char c, char **res, size_t i)
{
	size_t	start;
	size_t	len;

	start = 0;
	while (s[start])
	{
		if (s[start] != c)
		{
			len = 0;
			while (s[start + len] && s[start + len] != c)
				len++;
			res[i] = ft_substr(s, start, len);
			if (!res[i])
			{
				free_all(res, i);
				return (NULL);
			}
			++i;
			start += len;
		}
		else
			start++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	res = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (split_words(s, c, res, i));
}
