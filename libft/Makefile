# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 14:56:00 by brvasque          #+#    #+#              #
#    Updated: 2024/05/24 14:56:19 by brvasque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la librería ------------------------------------------------------ #

NAME = libft.a

# Compilador y flags --------------------------------------------------------- #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente y objetos -------------------------------------------------- #

SRCS = ft_atoi.c ft_strlen.c ft_split.c ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c
OBJS = $(SRCS:.c=.o)

# Reglas --------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

