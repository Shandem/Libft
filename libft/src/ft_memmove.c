/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:35:43 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/04 15:59:08 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d == s)
		return (dst);
	if (s < d)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
			*d-- = *s--;
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
