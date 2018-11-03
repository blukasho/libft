# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 12:56:17 by blukasho          #+#    #+#              #
#*   Updated: 2018/11/03 19:36:18 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
	   ft_strrchr.c ft_strcmp.c ft_strstr.c ft_strncmp.c ft_strnstr.c

OBJ = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	  ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o \
	  ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o\
	  ft_strrchr.o ft_strcmp.o ft_strstr.o ft_strncmp.o ft_strnstr.o

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

.PHONY: all makelib clean fclean re
