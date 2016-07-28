# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tardouin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 12:52:02 by tardouin          #+#    #+#              #
#    Updated: 2016/07/23 18:47:43 by tardouin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-02

SRC = ./colle00.c ./colle01.c ./colle02.c ./colle03.c ./colle04.c \
	  ./ft_putchar.c ./main.c

all : $(NAME)

$(NAME)
	cc -c -Wall -Werror -Wextra $(SRC)

clean :
	rm -f colle00.o colle01.o colle02.o colle03.o colle04.o ft_putchar.o \
		main.o

fclean : clean
	rm -f $(NAME)

re : fclean all
