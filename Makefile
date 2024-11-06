# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 15:12:50 by cpoulain          #+#    #+#              #
#    Updated: 2024/11/06 15:37:44 by cpoulain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Wextra -Werror

LIBFT_PATH		= 42_libft
LIBFT_INC_DIR	= $(LIBFT_PATH)
LIBFT			= $(LIBFT_PATH)/libft.a

SRC_DIR			= src
INC_DIR			= include
OBJ_DIR			= build

NAME			= libftprintf.a

include Files.mk

SRCS			= $(addsuffix .c,$(addprefix $(SRC_DIR)/,$(FILES)))
OBJS			= $(addsuffix .o,$(addprefix $(OBJ_DIR)/,$(FILES)))

all: $(NAME)

bonus: all

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $@
	@sh -c "ar rcs $@ $(OBJS) || rm $@"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ -I$(INC_DIR) -I$(LIBFT_INC_DIR) $(CFLAGS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


