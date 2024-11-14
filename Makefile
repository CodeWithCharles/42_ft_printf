# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 15:12:50 by cpoulain          #+#    #+#              #
#    Updated: 2024/11/14 17:06:29 by cpoulain         ###   ########.fr        #
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

FILES	=																	\
	flags/format_flag_has_align_sign flags/format_flag_has_force_sign		\
	flags/format_flag_has_hex_prefix flags/format_flag_has_left_justify		\
	flags/format_flag_has_precision flags/format_flag_has_zero_padding		\
	ft_printf hex_printer number_printer printers/char_printer				\
	printers/decimal_printer printers/integer_printer						\
	printers/lo_hex_printer printers/pointer_printer						\
	printers/string_printer printers/unsigned_printer						\
	printers/up_hex_printer string_printer utils

SRCS			= $(addsuffix .c,$(addprefix $(SRC_DIR)/,$(FILES)))
OBJS			= $(addsuffix .o,$(addprefix $(OBJ_DIR)/,$(FILES)))

all: $(NAME)

bonus: all

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $@
	@sh -c "ar rcs $@ $(OBJS) || rm $@"

tests: $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@sh -c "$(CC) $(OBJS) $(CFLAGS) $(NAME) test.c -o ft_printf || rm $(NAME)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ -I$(INC_DIR) -I$(LIBFT_INC_DIR) $(CFLAGS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

clean:
	$(MAKE) clean -C $(LIBFT_PATH)
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus tests clean fclean re
