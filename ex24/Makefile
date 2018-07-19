#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaslova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 18:42:47 by omaslova          #+#    #+#              #
#    Updated: 2018/03/27 14:35:32 by omaslova         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

INCLUDE = ./includes

FLAGS = -Wall -Wextra -Werror

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDE)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f *~

fclean: clean
	/bin/rm $(NAME)

re: fclean
	make all