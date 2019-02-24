
size_t	ft_wrodcount(const char *s, char c)
{
	size_t i;
	size_t w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w += 1;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (w);
}
