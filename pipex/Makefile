# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 20:40:05 by gigardin          #+#    #+#              #
#    Updated: 2023/11/28 20:48:41 by gigardin         ###   ########.fr        #
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

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS) $@
#	ar rcs $(NAME) $?
#	echo $?

%.o: %.c
	$(CC) -c $< -o $@
	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re