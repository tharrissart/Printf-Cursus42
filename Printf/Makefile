# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thharris <thharris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 21:53:12 by thharris          #+#    #+#              #
#    Updated: 2025/12/29 22:07:47 by thharris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_utiles.c

LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

OBJ = ${SRC:.c=.o}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${LIBFT} ${OBJ}
	cp ${LIBFT} ${NAME} 
	ar rcs ${NAME} ${OBJ}

${LIBFT}:
	make -C ${LIBFT_PATH} all

clean:
	make -C $(LIBFT_PATH) fclean
	rm -rf ${OBJ}

fclean:
	rm -rf ${OBJ}
	make -C $(LIBFT_PATH) fclean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
