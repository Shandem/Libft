#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*out;

	out = (unsigned char*)str;
	while (n--)
		if (*out == (unsigned char)c)
			return (out);
		else
			out++;
	return (NULL);
}
