#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		counter;
	size_t	counter_2;

	counter = 0;
	counter_2 = 0;
	while (s1[counter] != '\0')
		counter++;
	while (counter_2 < n && s2[counter_2] != '\0')
	{
		s1[counter] = s2[counter_2];
		counter++;
		counter_2++;
	}
	s1[counter] = '\0';
	return (s1);
}
