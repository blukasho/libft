#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 12:56:17 by blukasho          #+#    #+#              #
#*   Updated: 2018/11/01 13:48:29 by blukasho                                 *#
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c
OBJ = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	  ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o
GCC = gcc -Wall -Wextra -Werror

all: makelib

makelib:
	$(GCC) -c $(SRCS)
	ar -rv libft.a $(OBJ)
	ranlib libft.a

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libft.a

re:	fclean all

rm: fclean clean

so:
	gcc -L. -lft -Wall -Werror -Wextra -ansi -std=c99 -I. *.c

.PHONY: all makelib clean fclean re rm so
