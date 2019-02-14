/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 13:04:23 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/11 13:48:13 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_wordcount(char const *str, char delim)
{
	unsigned int 	i;

	i = 0;
	while (*str)
	{
		while ( *str == delim)
			str++;
		if (*str != '\0')
			i++;
		while (*str && *str != delim)
			str++;
	}
	return (i);
}	
