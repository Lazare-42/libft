# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/27 14:56:05 by lazrossi          #+#    #+#              #
#    Updated: 2017/03/28 17:24:01 by lazrossi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DYN = libft.so
SRC = *.c

INCLUDES = ./includes/

all: 
	gcc -c $(SRC) -I $(INClUDES) -Wall -Wextra -Werror
	ar rc $(NAME) *.o
so:
	ar rs $(DYN) $(NAME)

clean: 
	rm -rf *.o

fclean: clean
	rm -rf libft.a
	rm -rf libft.so

re: fclean all
