/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 12:05:44 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/06 12:10:00 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict d, const void *restrict s, size_t n)
{
	unsigned char				*dst;
	unsigned const char	*src;
	size_t							count;

	dst = d;
	src = s;
	count = -1;
	while (++count < n)
		dst[count] = s[count];
	return (dst);
}
