/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:29:44 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/14 18:32:09 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigend char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n--)
		*d++ = *s++;
	return(dst);
}
