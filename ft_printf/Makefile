# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 18:18:50 by gigardin          #+#    #+#              #
#    Updated: 2023/09/07 18:19:48 by gigardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= cc

CFLAGS	:= -Wall -Wextra -Werror

NAME	:= ft_printf.a

SRC		:= ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \


SRC_BONUS	:=	ft_lstnew.c \

OBJS		:= $(SRC:%.c=%.o)

OBJS_BONUS	:= $(SRC_BONUS:%.c=%.o)

RM			:= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?
	echo $?

bonus: $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re