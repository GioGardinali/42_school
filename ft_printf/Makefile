# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 18:18:50 by gigardin          #+#    #+#              #
#    Updated: 2023/09/12 12:06:18 by gigardin         ###   ########.fr        #
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

--------------------------
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_nbrlen.c ft_printf.c ft_put_nbrun.c ft_putchar_fd.c ft_puthex_fd.c \
		ft_puthexlower.c ft_putnbr_fd.c ft_putstr_fd.c ft_puthexupper.c
OBJS = ${SRCS:.c=.o}
RM = rm -rf
AR = ar -rcs

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c .o: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -I ./

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re