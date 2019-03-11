#include "libft.h"

char	*ft_letters(char const *s, char c, int letter)
{
	int 	d;
	int 	b;
	char	*ptr;

	b = letter;
	d = 0;
	while (s[b] != c && s[b] != '\0')
	{
		d++;
		b++;
	}
	ptr = (char *)ft_memalloc(sizeof(char) * (d + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_fill(s, ptr, c, letter);
	return (ptr);
}
