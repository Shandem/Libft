/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 10:20:26 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/08 10:20:30 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char delim)
{
	char	**out;
	int	oi;
	int	i;
	int	start;

	if (!str || !(out = (char**)malloc(sizeof(char*) * (ft_wordcount(str, delim)) + 1)))
		return (NULL);
	oi = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == delim)
			i++;
		start = i;
		while (str[i] && str[i] != delim)
			i++;
		if (i > start)
			out[oi++] = ft_strndup(str + start, i - start);
	}
	out[oi] = NULL;
	return (out);
}
