/*
For the character classification functions (isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
