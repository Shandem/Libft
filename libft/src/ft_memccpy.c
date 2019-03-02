/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:15:15 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/15 14:15:23 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*found;
	int				clen;
	unsigned char	*s;

	found = ft_memchr(src, (unsigned char)c, n);
	clen = found - (unsigned char*)src + 1;
	s = (unsigned char*)src;
	if (found)
	{
		dst = ft_memcpy(dst, src, clen);
		return (dst + clen);
	}
	else
		dst = ft_memcpy(dst, src, n);
	return (NULL);
}
