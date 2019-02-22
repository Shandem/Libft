/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:34:14 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/21 15:47:47 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char	*fresh;

	if (!s)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
		fresh[i] = f(i, s[i++]);
	fresh[i] = '\0';
	return (fresh);
}
