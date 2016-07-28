# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbuch <mbuch@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:40:15 by mbuch             #+#    #+#              #
#    Updated: 2016/07/20 16:49:58 by mbuch            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# define the name of the library
NAME = libft.a

# define the C source files to compile
SRCS = 	ft_putchar.c	\
		ft_putstr.c		\
		ft_strlen.c		\
		ft_swap.c		\
		ft_strcmp.c

# define the C object files
OBJS = $(SRCS:.c=.o)

# define the source files path
SDIR = srcs/

#define the header files path
IDIR = includes

# define the rm command
RM = rm -f

# define the compiler
CC = gcc

AR = ar

# define compiler flags
ARFLAGS = rc

# define compiler flags
CFLAGS = -Wall -Werror -Wextra

all :
	@echo "Compiling all C files from . to objects."
	$(CC) $(CFLAGS) -I $(IDIR) -c $(addprefix $(SDIR),$(SRCS))
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Creating ft library -> "$(NAME)
	ranlib $(NAME)

clean :
	@echo "Clearing object files."
	$(RM) $(OBJS)

fclean : clean
	@echo "Clearing library file."
	$(RM) $(NAME)

re : fclean all
