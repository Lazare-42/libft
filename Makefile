# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lazrossi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/27 14:56:05 by lazrossi          #+#    #+#              #
#    Updated: 2017/04/18 10:50:33 by lazrossi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJECT = *.o

all: $(NAME)

$(NAME):  
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJECT)

clean: 
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
