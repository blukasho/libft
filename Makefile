# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 12:56:17 by blukasho          #+#    #+#              #
#*   Updated: 2018/11/04 02:07:14 by blukasho         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
	   ft_strrchr.c ft_strcmp.c ft_strstr.c ft_strncmp.c ft_strnstr.c\
	   ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_toupper.c ft_tolower.c

OBJ = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	  ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o \
	  ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o\
	  ft_strrchr.o ft_strcmp.o ft_strstr.o ft_strncmp.o ft_strnstr.o\
	  ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o\
	  ft_isprint.o ft_toupper.o ft_tolower.o

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
