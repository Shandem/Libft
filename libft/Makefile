# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshguti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/01 11:29:21 by joshguti          #+#    #+#              #
#    Updated: 2019/03/01 11:34:20 by joshguti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		 	ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_itoa.c ft_memalloc.c\
			ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memdel.c ft_memmove.c ft_memset.c\
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c\
			ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c \
			ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c\
			ft_striter.c ft_striteri.c ft_strjoin.c ft_strlen.c ft_strmap.c ft_strmapi.c\
			ft_strncat.c ft_strncmp.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
			ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c\
			ft_wordcount.c

OBJ = $(SRC:.c=.o)

INCLUDE=./

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
