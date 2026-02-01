/*
   For the character classification functions 
   (isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
   • 1 if the character matches the tested class
   • 0 if the character does not match
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
