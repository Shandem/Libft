#include "libft.h"

char	**ft_words(char const *s, char c)
{
	int	i;
	int	count;
	char	**ptr;

	i = -1;
	count = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
	}
	ptr = (char **)ft_memalloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count] = 0;
	return (ptr);
}
