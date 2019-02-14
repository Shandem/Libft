/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 13:44:59 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/11 13:45:01 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*ft_strdup(char *src)
{
	char *n;
	int	i;

	n = malloc(sizeof(*src));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
