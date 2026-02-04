#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char * ds = (unsigned char *)dest;
	const unsigned char * sr = (const unsigned char *)src;
	size_t i;
	
	i = 0;
	if (!ds && !sr) // Return NULL if both pointers are NULL
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		++i;
	}
	return (dest);
}
