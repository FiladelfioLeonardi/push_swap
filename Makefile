# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 18:46:57 by fileonar          #+#    #+#              #
#    Updated: 2025/03/02 10:02:24 by fileonar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -fsanitize=address

CC = gcc
CFLAGS =  -Wall -Werror -Wextra -g 

NAME = push_swap

SRC = main.c checkers.c utils.c utils2.c k_algorithm.c push_functions.c \
		malloc.c rotate_functions.c reverse_rotate_functions.c \
		sort_functions.c swap_functions.c
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I $(LIBFT_DIR)
HEADER = push_swap.h

OBJS = $(SRC:%.c=bin/%.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@git submodule update --init $(LIBFT_DIR)
	@make -C $(LIBFT_DIR) all

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(INCLUDES)

bin/%.o : %.c | bin
	$(CC) -c -o $@ $< $(CFLAGS) $(INCLUDES)

bin:
	@mkdir -p bin

clean:
	@rm -fr bin
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean


re: fclean all

.PHONY: all clean fclean re

# ifeq ($(DEBUG),1)
# CFLAGS+=-g3
# clean_when_debug: fclean
# endif