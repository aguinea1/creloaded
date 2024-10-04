# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguinea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 17:36:36 by aguinea           #+#    #+#              #
#    Updated: 2024/09/14 19:42:27 by aguinea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file


CC = cc
CFLAGS = -Wall -Wextra -Werror #-g -fsanitize=address


SRCS = ft_display_file.c


OBJS = ${SRCS:.c=.o}


RM = rm -f


all: ${NAME}


%.o:%.c
	 ${CC} ${CFLAGS} -c -o $@ $<


${NAME}: ${OBJS}
	 ${CC} ${CFLAGS} -o $@ $^

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
