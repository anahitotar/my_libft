/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:29:32 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/06 18:29:44 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
For the character classification functions 
(isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
