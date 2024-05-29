# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/18 10:02:53 by brvasque          #+#    #+#              #
#    Updated: 2024/05/29 11:44:53 by brvasque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable ------------------------------------------------------ #

NAME = push_swap

# Compilador y flags --------------------------------------------------------- #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Directorios ---------------------------------------------------------------- #

SRCS_DIR = src
OBJS_DIR = obj
LIBFT_DIR = libft
PRINTF_DIR = ft_printf

# Archivos fuente y objetos -------------------------------------------------- #

SRCS = $(SRCS_DIR)/push_swap.c \
       $(SRCS_DIR)/operations.c \
       $(SRCS_DIR)/parsing.c \
       $(SRCS_DIR)/sorting.c \
       $(SRCS_DIR)/utils.c

OBJS = $(OBJS_DIR)/push_swap.o \
       $(OBJS_DIR)/operations.o \
       $(OBJS_DIR)/parsing.o \
       $(OBJS_DIR)/sorting.o \
       $(OBJS_DIR)/utils.o

# Librerías ------------------------------------------------------------------ #

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Colores y emojis ----------------------------------------------------------- #

GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
BLUE = \033[0;34m
RESET = \033[0m
CHECK = ✅
CROSS = ❌
BUILD = 🚀
CLEAN = 🧹
COMPILE = 🛠️
LINK = 🔗
REMOVE = 💥

all: $(NAME)

# Crear el directorio de objetos si no existe -------------------------------- #

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@echo "$(BLUE)$(BUILD) Creando directorio de objetos... $(RESET)"

# Compilar los archivos objeto ----------------------------------------------- #

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COMPILE) Compilando: $< $(RESET)"

# Compilar la librería libft --------------------------------------------------#

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@echo "$(CHECK) $(GREEN)Compilación de libft completada con éxito$(RESET)"

# Compilar la librería printf -------------------------------------------------#

$(PRINTF):
	@make -C $(PRINTF_DIR)
	@echo "$(CHECK) $(GREEN)Compilación de printf completada con éxito$(RESET)"

# Enlazar todo y crear el ejecutable ------------------------------------------#

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBFT) $(PRINTF)
	@echo "$(LINK) $(GREEN)Compilación de $(NAME) completa$(RESET) $(CHECK)"

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@make -C $(PRINTF_DIR) clean
	@echo "$(CLEAN) $(YELLOW)Archivos objeto eliminados$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(PRINTF_DIR) fclean
	@rmdir $(OBJS_DIR) 2> /dev/null || true
	@echo "$(REMOVE) $(RED)Ejecutable y directorio destruidos$(RESET)"

re: fclean all

.PHONY: all clean fclean re

