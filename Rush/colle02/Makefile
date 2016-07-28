# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 05:40:43 by mbuch             #+#    #+#              #
#    Updated: 2016/07/24 21:18:49 by mbuch            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# define the name of the executable
NAME = colle-2

# define the C source files to compile
SRCS = 	main.c				\
		ft_strlen.c			\
		ft_strncat.c		\
		ft_list_clear.c		\
		ft_create_list.c	\
		ft_list_foreach.c	\
		ft_list_push_back.c	\
		list_to_str.c		\
		display_res.c		\
		bufferize.c			\
		identify.c			\
		which_rush.c

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
