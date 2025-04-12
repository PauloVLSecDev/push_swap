# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 14:36:16 by pvitor-l          #+#    #+#              #
#    Updated: 2025/04/11 20:12:33 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAG = -Wall -Wextra -Werror -g3
LIB_DIR = libft
LIBFT = $(LIB-DIR)/libft.a
DIR = src/
SRC =	$(DIR)main.c \
	$(DIR)utils.c \


OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)
	@echo "____|  \\  |  _ \\  |   |  _ \\   _ \\     \\     ____| __ __|  _ \\   _ \\   ___|     \\"
	@echo "__|   |\\/ | |   | |   | |   | |   |   _ \\    __|      |   |   | |   | |       _  \\"
	@echo "|     |   | ___/  |   | __ <  __ <   ___ \\   |        |   __ <  |   | |      ___  \\"
	@echo "_____|_| _|_|    \\___/ _| \\_\\_| \\_\\_/    _\\ _____|   _|  _| \\_\\\___/ \\____|_/     _\\"

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
