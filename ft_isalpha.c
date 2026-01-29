/*
For the character classification functions (isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
