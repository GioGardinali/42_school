#≻─✪ NAME ✪ ⋆░───────────────────────────────────────────────────────────────≺#
NAME		=	push_swap
LIBFT_PATH	=	./libraries/libft
LIBS_PATH 	= 	-L$(LIBFT_PATH)
LIBS		=	-lft
INCLUDES	=	-I ./includes -I $(LIBFT_PATH)/includes
CFLAGS		=	-Wall -Wextra -Werror $(INCLUDES)
FILES		=	main.c \
				algorithm.c \
				check_max_min.c \
				clear.c \
				errors.c \
				push.c \
				push_condition.c \
				rotate.c \
				rev_rotate.c \
				stack_by_size.c \
				stack_utilities.c \
				stacking_in_a.c \
				stacking_in_b.c \
				swap.c \
				validations.c

SRCS		=	$(addprefix src/, $(FILES))
OBJS		=	$(SRCS:.c=.o)


#≻───░⋆ ✪ RULES ✪ ⋆░────────────────────────────────────────────────────────≺#

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) --no-print-directory
	$(CC) $(OBJS) -o $(NAME) $(LIBS_PATH) $(LIBS)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_PATH) --no-print-directory

fclean:
	$(RM) $(OBJS) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH) --no-print-directory

re: fclean all

.PHONY: all clean fclean re