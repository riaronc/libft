# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odushko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/27 15:55:15 by odushko           #+#    #+#              #
#    Updated: 2018/11/08 16:39:01 by odushko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
OPT = *.o
SOURCE = *.c

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SOURCE)
	ar rc $(NAME) $(OPT)
	ranlib $(NAME)

clean:
	rm -f $(OPT)

fclean: clean
	rm -f $(NAME)

re: fclean all
