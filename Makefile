# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 14:36:16 by pvitor-l          #+#    #+#              #
#    Updated: 2025/04/16 17:14:49 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAG = -Wall -Wextra -Werror -g3
LIB_DIR = libft
LIBFT = $(LIB-DIR)/libft.a
DIR = src/
GREEN = \033[1;92m
RESET = \033[0m
SRC =	$(DIR)main.c \
	$(DIR)utils.c \
	$(DIR)errors.c \
	$(DIR)t_list_utils.c \
	$(DIR)operations_a.c \
	$(DIR)operations_b.c \
	$(DIR)sort_number.c \
	$(DIR)radix.c \
	$(DIR)bits_funcs.c \
	$(DIR)clear.c \
	
	
OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)
	@echo "$(GREEN)"
	@echo " ██████╗  ██╗   ██╗███████╗██╗  ██╗    ███████╗██╗    ██╗ █████╗ ██████╗ "
	@echo " ██╔══██╗ ██║   ██║██╔════╝██║  ██║    ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo " ██████╔╝ ██║   ██║███████╗███████║    ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo " ██╔═══╝  ██║   ██║╚════██║██╔══██║    ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo " ██║      ╚██████╔╝███████║██║  ██║    ███████║╚███╔███╔╝██║  ██║██║     "
	@echo " ╚═╝	   ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "
	@echo "$(RESET)"

$(LIBFT):
	@make -C $(LIB_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $@ -L$(LIB_DIR) -lft

%.o: %.c
	$(CC) $(CFLAG) -I$(LIB_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make -C $(LIB_DIR) --no-print-directory clean
	@echo "-finish clearning"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIB_DIR) fclean
	
re: fclean all

.PROXY: all, clear, fclean, re
