/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 10:58:24 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/06 11:01:31 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int						count;
	unsigned char 	x;
	const char			*ptr;

	x = c;
	count = -1;
	ptr = NULL;
	while (s[++count] != '\0')
	{
	  if (s[count] == x)
		  ptr = &s[count];
  }
	if (s[count] == x)
		ptr = &s[count];
	return ((char*)ptr);
}
