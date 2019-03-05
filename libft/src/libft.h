/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:16:02 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/04 14:16:14 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int				ft_atoi(const char *str);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_islower(int c);
int				ft_toupper(int c);
int				ft_isupper(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isspace(int c);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, int n);
int				ft_whitespace(int i);

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int	ft_wordcount(char const *str, char delim);

char			*ft_strchr(const char *str, int c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dst, char *src);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnew(size_t size);
char			*ft_strncat(char *dest, char *src, int nb);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strncpy(char *dst, const char *src, size_t len);

void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putstr(char *str);
void			ft_strclr(char *s);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_memcpy(void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
void			ft_bzero(void *str, size_t n);

#endif
