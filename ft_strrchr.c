/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:26:40 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/06 19:45:54 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if ((unsigned char)c == (unsigned char)s[i])
			last = ((char *)(s + i));
		++i;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (last);
}
