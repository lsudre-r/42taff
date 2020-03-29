CC = clang

NAME = printf.a

DIR_S = src

SOURCES = ft_itoa.c \
			ft_printf.c \
			main.c \
			print_char.c \
			print_int.c \
			print_percent.c \
			print_strchar.c \
			print_uint.c \


OBJS = $(addprefix $(DIR_S)/,$(SOURCES:.c=.o))

CFLAGS = -I./src/

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
