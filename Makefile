# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marojas- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 13:40:13 by marojas-          #+#    #+#              #
#    Updated: 2024/04/16 11:56:47 by marojas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = \
	ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbrpositive.c \
	ft_hexadecimallower.c ft_hexadecimalupper.c ft_pointer.c 
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAG = -r

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc -Wall -Werror -Wextra -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
