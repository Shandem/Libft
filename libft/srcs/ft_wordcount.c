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
