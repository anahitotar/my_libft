/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:30:05 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/06 18:30:11 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   For the character classification functions 
   (isalpha, isdigit, isalnum, isascii, isprint), the return value must be:
   • 1 if the character matches the tested class
   • 0 if the character does not match
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
