#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	while (n--)
		*(char*)str++ = '\0';
}
