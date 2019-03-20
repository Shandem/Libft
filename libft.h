/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:16:02 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 15:47:47 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <xlocale.h>

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

int			ft_atoi(const char *str);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_islower(int c);
int			ft_toupper(int c);
int			ft_isupper(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isspace(int c);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, int n);
int			ft_whitespace(int i);

size_t			ft_strlen(const char *str);
t_list			*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);

unsigned int		ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int		ft_wordcount(char const *str, char delim);

char			*ft_strtrim(char const *s);
char			*ft_strchr(const char *str, int c);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strdup(const char *src);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strcpy(char *dst, char *src);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnew(size_t size);
char			*ft_strncat(char *restrict s1, const char *restrict s2,
					size_t n);
char			*ft_strmap(char const *s, char (*f)(char));
char			**ft_strsplit(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_itoa(int n);
char			**ft_words(char const *s, char c);
char			*ft_fill(char const *s, char *ptr, char c, int i);
char			*ft_letters(char const *s, char c, int letter);

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_putendl(char const *s);
void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putendl_fd(char const *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putstr(char *str);
void			ft_strclr(char *s);
void			*ft_memchr(const void *str, int c, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memcpy(void *restrict d, const void *restrict s, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
void			ft_bzero(void *str, size_t n);

#endif
