#include "libft"

char	*ft_strdup(char *src)
{
	char *n;
	int	i;

	n = malloc(sizeof(*src));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
