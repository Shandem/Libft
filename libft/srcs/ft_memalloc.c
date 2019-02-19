/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:59:20 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/18 12:06:15 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = NULL
		if (size)
		{
			if (!(ptr = (unsigned char *)malloc(size)))
				return (NULL);
			whiel (size)
				ptr [--size] = 0;
		}
	return ((void *)ptr);
}
