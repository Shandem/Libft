/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 17:13:40 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/26 13:32:44 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = NULL;
	if (s1 && s2)
	{
		new = (char *)malloc(sizeof(char) *
				(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!new)
			return (NULL);
		ft_strcpy(new, s1);
		ft_strcat(new, s2);
	}
	return (new);
}
