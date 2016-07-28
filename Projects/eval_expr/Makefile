# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 01:26:11 by mbuch             #+#    #+#              #
#    Updated: 2016/07/23 01:27:50 by mbuch            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# define the name of the executable
NAME = 	evalexpr

# define the C source files to compile
SRCS = 	ft_atoi.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		parser.c

# define the C object files
OBJS = $(SRCS:.c=.o)

# define the rm command
RM = rm -f

# define the compiler
CC = gcc

# define compiler flags
CFLAGS = -Wall -Werror -Wextra

all :
	@echo "Compiling all files to objects."
	$(CC) $(CFLAGS) -c $(SRCS)
	@echo "Compiling objects to executable."
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	@echo "Cleaning objects."
	$(RM) $(OBJS)

fclean : clean
	@echo "Clearing exec file."
	$(RM) $(NAME)

re : fclean all
