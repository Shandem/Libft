#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int	letter;
	int	word;
	char	**ptr;

	if ((!c) || (!s))
		return (NULL);
	word = 0;
	letter = -1;
	ptr = ft_words(s, c);
	if (!ptr)
		return (NULL);
	while (s[++letter] != '\0')
	{
		if (s[letter] != c)
		{
			ptr[word] = ft_letters(s, c, letter);
			while (s[letter] != c && s[letter + 1] != '\0')
				letter++;
			word++;
		}
	}
	return (ptr);
}
