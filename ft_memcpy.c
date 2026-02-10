/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aotaryan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:51:49 by aotaryan          #+#    #+#             */
/*   Updated: 2026/02/06 18:54:23 by aotaryan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	if (!ds && !sr)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		++i;
	}
	return (dest);
}
