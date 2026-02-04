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
	
The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char *	ft_strrchr(const char *s, int c)
{
	size_t	i;
	char *	last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == (unsigned char)s[i])
			last = (char *)(s + i);
		++i;
	}
	if (c == '\0')
	        return (char *)(s + i);
	return (last);
}
