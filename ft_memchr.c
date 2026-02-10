/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:31:24 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/06 18:45:15 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*temp;

	temp = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)temp[i] == (unsigned char)c)
			return ((void *)(temp + i));
		++i;
	}
	return (NULL);
}
