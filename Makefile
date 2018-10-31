# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blukasho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 12:56:17 by blukasho          #+#    #+#              #
#    Updated: 2018/10/31 16:16:12 by blukasho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c
OBJ = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o
GCC = gcc -Wall -Wextra -Werror

all: makelib

makelib:
	$(GCC) -c $(SRCS)
	ar -rv libft.a $(OBJ)
	ranlib libft.a

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf libft.a

re:	fclean all

.PHONY: all makelib clean fclean re
