/*
SYNOPSIS
     #include <string.h>

     void *
     memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
RETURN VALUES
     The memset() function returns its first argument.
*/
#include "libft.h"

void *	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	unsigned char	ch;

	temp = b;
	ch = (unsigned char)c;
	while(len != 0)
	{
		*temp = ch;
		temp++;
		--len;
	}
	return (b);
}
