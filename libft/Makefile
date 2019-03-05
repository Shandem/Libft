# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshguti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/04 13:59:40 by joshguti          #+#    #+#              #
#    Updated: 2019/03/04 14:12:48 by joshguti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/*.c

all : $(NAME)

$(NAME) :
							gcc -c -Wall -Werror -Wextra $(SRC)
							ar rc $(NAME) -o $(NAME)

clean :
							/bin/rm -f *.o

fclean : clean
							/bin/rm -rf $(NAME)

re : fclean all
