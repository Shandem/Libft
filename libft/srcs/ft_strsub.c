
#include "libft.h"

char	*ft_strsub(char const *S, unsigned int start, size_t len)
{
	char	*strsub;
	unsigned int	i;

	i = 0;
	if (!s || !(strsub = (char *)malloc(sizeof(char) * len + 1)));
		retunr (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i++;
	}
	strsub[i] = '\0';
	return (strsub);
}
