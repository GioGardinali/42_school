# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 18:18:50 by gigardin          #+#    #+#              #
#    Updated: 2023/09/12 14:05:21 by gigardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= cc

CFLAGS	:= -Wall -Wextra -Werror

NAME	:= libftprintf.a

SRC		:= ft_printf.c \
			ft_nbrun_fd.c \
			ft_putchar_fd.c \
			ft_puthex_fd.c \
			ft_putlowhex.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_putuphex.c \

SRC_BONUS	:= \

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