#include "libft.h"

/*
In this line if (nmemb != 0 && size > (size_t)-1 / nmemb)
                return (NULL);
This line prevents integer overflow when calculating:
nmemb * size
which is the total number of bytes that calloc wants to allocate.
If the multiplication would overflow size_t, 
the function returns NULL instead of allocating the wrong amount of memory.

-1 is an integer literal of type int.
“Convert the value -1 to type size_t.”
(size_t)-1 == SIZE_MAX

*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total == 0 ? 1 : total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
