# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 03:10:19 by brvasque          #+#    #+#              #
#    Updated: 2024/03/14 10:37:39 by brvasque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** # 

SRC		=	ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_p.c ft_printf_u.c ft_putchar.c ft_putnbr.c ft_printf_x.c ft_toupper.c ft_putstr.c

OBJS	= ${SRC:.c=.o}

NAME	= libftprintf.a 	

# ------------------------------------------------------------------------------------

AR				= ar rcs

RM				= rm -f

CC				= cc

CFLAGS		= -Wall -Wextra -Werror

# -----------------------------------------------------------------------------------

all:		${NAME}

${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}

%.o:	%.c	ft_printf.h Makefile
				${CC} ${CFLAGS} -c $< -o $@ 

clean:
				rm -f ${OBJS}

fclean:		clean
				rm -f ${NAME}

re:				fclean all

.PHONY:		all clean fclean re
