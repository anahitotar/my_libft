/*
For the character classification functions 
(isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
