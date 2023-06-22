# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-jesu <fde-jesu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 20:34:42 by fde-jesu          #+#    #+#              #
#    Updated: 2023/06/22 19:34:47 by fde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
FUN =   ft_printf.c ft_check_specifier.c ft_putchar.c ft_putnbr.c \
		ft_writing.c ft_hexa_xs.c ft_hexa_p.c \
		ft_putnbr_u.c
OBJS = ${FUN:.c=.o}

all: ${NAME}

${NAME}:
		cc ${CFLAGS} -c ${FUN}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
