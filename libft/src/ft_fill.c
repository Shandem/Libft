#include "libft.h"

char	*ft_fill(char const *s, char *ptr, char c, int i)
{
	int x;

	x = 0;
	while (s[i] != c && s[i] != '\0')
	{
		ptr[x] = s[i];
		x++;
		i++;
	}
	ptr[x] = '\0';
	return (ptr);
}
