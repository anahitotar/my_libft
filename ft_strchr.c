/*
SYNOPSIS
     #include <string.h>

     char *
     strchr(const char *s, int c);

     char *
     strrchr(const char *s, int c);

DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be
     part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
*/

#include "libft.h"

char *	ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return (char *)(s + i);
		++i;
	}
	if (c == '\0')
	        return (char *)(s + i);
	return (NULL);
}
