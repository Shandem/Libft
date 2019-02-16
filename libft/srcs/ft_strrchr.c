/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:05:43 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/15 15:14:21 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	const char *last;

	last = NULL;
	if (i)
		while ((s=strchr(s, i)))
		{
			last = s;
			s++;
		}
	else
		last = strchr(s, i);
	return (char *) last;
}
