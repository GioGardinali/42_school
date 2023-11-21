# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 18:28:55 by gigardin          #+#    #+#              #
#    Updated: 2023/11/20 23:10:56 by gigardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Properties for MacOS
#CDEBUG = -g3
#GRATE = GAME_RATE=17
##LMLX = -lmlx -framework OpenGL -framework AppKit
#LMLX = -framework Cocoa -framework OpenGL -framework IOKit
#valgrind --leak-check=full --show-leak-kinds=all --suppressions=./errors.txt -s -q ./so_long maps/map1.ber;
#--------------------PATHS--------------------#

SRC_PATH = ./src
HEADER_PATH = ./include/
LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)/libft.a
MAP_PATH = ./maps/
MLX_PATH = ./MLX42/build/libmlx42.a -g3 -ldl -lglfw -pthread -lm
MLX_HEADER = ./MLX42/include

#--------------------FILES--------------------#
BIN = so_long
NAME = $(BIN)

FILES =\
	main \
	initiate_game \
	read_map \
	validate_content_map \
	check_valid_path \
	handle_png_to_texture \
	handle_texture_to_img \
	handle_move_player \
	handle_hook \
	handle_render_game \
	handle_free \
	game_ending

OBJS = $(addprefix $(OBJS_PATH)/, $(addsuffix .o, $(FILES)))

#------------------VARIABLES-----------------#

CFLAGS = -Wall -Wextra -Werror -I$(HEADER_PATH)
LEAKS = valgrind --leak-check=full --show-leak-kinds=all --gen-suppressions=all --suppressions=./supp.txt
RM = rm -f
CC = gcc -g
AR = ar -rcs
OBJS_PATH = obj

#--------------------RULES------------------#

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -I./ -L$(LIBFT_PATH) -lft $(MLX_PATH) -o $@

$(OBJS_PATH)/%.o:$(SRC_PATH)/%.c | $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE)	-C $(LIBFT_PATH)

play: all
	$(LEAKS) ./so_long "./maps/map1.ber"

$(OBJS_PATH):
	@mkdir -p $(OBJS_PATH)

clean:
	$(MAKE) -sC $(LIBFT_PATH) clean
	$(RM) -r $(OBJS_PATH)

fclean: clean
	$(MAKE) -sC $(LIBFT_PATH) fclean
	$(RM) -r $(BIN);

re: fclean all

.PHONY: all clean fclean re