# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 14:36:16 by pvitor-l          #+#    #+#              #
#    Updated: 2025/03/31 14:47:48 by pvitor-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAG = -Wall -Wextra -Werror -g3
LIBFT = lift/libft.a
DIR = src/
OBS = $(DIR)ft_name \

all:
	$(CC) $(CFLAG) $(OBS)


