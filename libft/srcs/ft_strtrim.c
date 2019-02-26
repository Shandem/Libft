
#include "libft.h"

char  *ft_strtrim(char const *s)
{
  size_t start;
  size_t len;

  start = 0;
  while ((s[start]== ' ' || s[start] == '\n' || s[start] == '\t'))
    start++;
  if (s[start] == '\0')
    return (ft_strdup(s + start));
  len = ft_strlen(s) - 1;
  while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
    len--;
  return (ft_strsub(s, start, len - start + 1));
}
