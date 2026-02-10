#include "libft.h"

static size_t  count_words(char const *s, char c)
{
	size_t  count;
	size_t  i;

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

static void free_all(char **arr, size_t i)
{
	while (i > 0)
		free(arr[--i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t  i;
	size_t  start;
	size_t  len;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
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

