/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 13:41:47 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/14 15:26:38 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*	ft_memset(void* b, int c, size_t len)
{
	char* p

	p = (char*)b;
	i = 0;
	while (size_t i != len)
		++i;
	p[i] = c;
	return b;
}
