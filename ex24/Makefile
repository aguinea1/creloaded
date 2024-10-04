# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguinea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 11:27:16 by aguinea           #+#    #+#              #
#    Updated: 2024/09/14 17:25:39 by aguinea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror


SRCDIR = ./srcs
INCDIR = ./includes

SRCS = $(SRCDIR)/ft_putchar.c \
       $(SRCDIR)/ft_swap.c \
       $(SRCDIR)/ft_putstr.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strcmp.c

OBJS =  $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INCDIR)  -o $@ $<

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
