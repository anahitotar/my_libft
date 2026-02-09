#include "libft.h"

/*
	char (*f)(unsigned int, char)
This is a pointer to a function.
f is not a char, it's a pointer to a function.
The function it points to takes two parameters:
unsigned int
char
And it returns a char.
example of usage char *new_str = ft_strmapi("hello", (char func(unsigned int, char)));
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = '\0';
	return (res);
}
