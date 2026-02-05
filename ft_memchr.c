#include "libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char * temp;
	size_t i;

	temp = 	(const unsigned char *)s;
	i = 0;
	while(i < n)
	{
		if ((unsigned char)temp[i] == (unsigned char)c)
			return (void *)(temp + i);
		++i;
	}
	return (NULL);
}
