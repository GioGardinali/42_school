#≻───░⋆ ✪ DEFAULTS ✪ ⋆░──────────────────────────────────────────────────────≺#
NAME				=	push_swap
CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -O3

#≻───░⋆ ✪ PROJECT DIRECTORIES & FILES ✪ ⋆░───────────────────────────────────≺#
SRC_DIR				=	src
INCLUDE_DIR			=	include
BUILD_DIR			=	build
CC = cc
RM = rm -rf

LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)/libft.a

#≻─✪ NAME ✪ ⋆░───────────────────────────────────────────────────────────────≺#
NAME_SRC_DIR		=	$(SRC_DIR)/$(NAME)
NAME_SRC_FILES		=	main.c

NAME_SRCS			=	$(addprefix $(NAME_SRC_DIR)/, $(NAME_SRC_FILES))
NAME_INCLUDE_DIR	=	$(INCLUDE_DIR)/$(NAME)
NAME_INCLUDE_FILES	=	push_swap.h
NAME_INCLUDES		=	$(addprefix $(NAME_INCLUDE_DIR)/, $(NAME_INCLUDE_FILES))
NAME_BUILD_DIR		=	$(BUILD_DIR)/$(NAME)
NAME_OBJS			=	$(NAME_SRC_FILES:.c=.o)
NAME_BUILDS			=	$(addprefix $(NAME_BUILD_DIR)/, $(NAME_OBJS))


#≻───░⋆ ✪ RULES ✪ ⋆░────────────────────────────────────────────────────────≺#

all: $(NAME)

$(NAME): $(LIBFT) $(BUILD_DIR) $(NAME_BUILDS) $(NAME_INCLUDES)
	$(CC) -o $@ $(NAME_BUILDS) -I./$(NAME_INCLUDE_DIR) -I./$(LIBFT_PATH) \
	  -L./$(LIBFT) $(CFLAGS)

$(BUILD_DIR):
	@ mkdir $(BUILD_DIR) &&	\
	  cd $(BUILD_DIR) &&	\
	  mkdir $(NAME) &&		\

$(LIBFT):
	$(MAKE)	-C $(LIBFT_PATH)


$(NAME_BUILD_DIR)/%.o: $(NAME_SRC_DIR)/%.c $(NAME_INCLUDES)
	@ $(CC) -c $<					\
	  -I./$(NAME_INCLUDE_DIR)		\
	  -I./$(LIBFT_PATH)
	  -L./$(LIBFT)		\
	  -o $@	$(CC_FLAGS)

clean: 
	@ $(RM) $(BUILD_DIR)

fclean: clean
	@ $(RM) $(NAME)
	$(MAKE) -sC $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean clear re