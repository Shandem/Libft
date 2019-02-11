# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshguti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 13:48:47 by joshguti          #+#    #+#              #
#    Updated: 2019/02/11 13:48:49 by joshguti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = ./src/
SRC_FILES

INC_DIR = ./incudes/
INCLUDES = -I$(INC_DIR)

OBJ_DIR = ./obj/
OBJ_FILES = 
OBJS =

CC = gcc
CFLAGS = 

all : $(NAME)

obj:


$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		ar rc $(NAME) -o $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all
