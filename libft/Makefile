# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshguti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/12 16:28:35 by joshguti          #+#    #+#              #
#    Updated: 2019/03/12 16:34:00 by joshguti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRCS= *.c

OBJECTS= *.o

<<<<<<< HEAD
INCLUDES=./
=======
$(NAME) :
							gcc -c -Wall -Werror -Wextra $(SRC) &> /dev/null
							ar rc $(NAME) -o $(NAME)
>>>>>>> f5e29f0fb0f676e9b321a6280616a7a9161ebfca

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
