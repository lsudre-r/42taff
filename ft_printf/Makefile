CC = clang

NAME = printf.a
SRC =	ft_printf.c ft_itoa.c print_percent.c print_uint.c print_int.c print_strchar.c print_char.c main.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -I./

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
