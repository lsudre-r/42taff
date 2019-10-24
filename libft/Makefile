# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 14:15:47 by lsudre-r          #+#    #+#              #
#    Updated: 2019/10/11 14:15:49 by lsudre-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a
SRC =	ft_strlen.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memset.c ft_strchr.c ft_strcpy.c ft_strdup.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
		\
		ft_substr.c ft_strjoin.c ft_split.c ft_strmapi.c ft_putchar_fd.c \
		ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		\
		ft_strncpy.c ft_strlcpy.c ft_intlen.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I./

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re