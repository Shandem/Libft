/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 09:57:16 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/06 10:00:59 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *ptr;
	int	x;

	if (!s1 || !s2)
		return (NULL);
	x = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)ft_memalloc(x + 1);
	if (!ptr)
		return (NULL);
	ptr[x] = '\0';
	ptr = ft_strcpy(ptr, s1);
	ptr = ft_strcat(ptr, s2);
	return (ptr);
}
