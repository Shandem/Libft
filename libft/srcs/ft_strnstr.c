#include "libft.h"

char      *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
      int       lcpy;
      char  *h;
      char *n;

      if (*haystack == *needle && *haystack == '\0')
        return ((char*)haystack);
      while (*haystack && len > 0)
      {
          lcpy = len;
          h = (char *)haystack;
          n = (char *)needle;
          while (*n && *haystack && *n == *haystack && lcpy > 0)
          {
              n++;
              haystack++;
              lcpy--;
          }
          if (!*n)
            return (h);
          haystack = h + 1;
          len--;
      }
      return (NULL);
}
