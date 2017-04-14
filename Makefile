# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/27 14:56:05 by lazrossi          #+#    #+#              #
#    Updated: 2017/04/14 16:49:20 by lazrossi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

INCLUDES = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(INClUDES) -Wall -Wextra -Werror
	ar rc $(NAME) *.o

clean: 
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
