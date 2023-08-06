# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gigardin <gigardin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 15:35:07 by gigardin          #+#    #+#              #
#    Updated: 2023/08/06 19:50:51 by gigardin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRC		= ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJS	= $(SRC:%.c=%.o)

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $?
	gcc -Wall -Wextra -Werror -c $< -o $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
