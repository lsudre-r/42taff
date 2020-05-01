COMPILATEUR = clang

NAME = printf.a

FLAGS = -Werror -Wextra -Wall -g3 -fsanitize=address

FILES = ft_itoa \
			ft_printf \
			print_char \
			print_int \
			print_percent \
			print_strchar \
			print_uint \
			check_buffer \

SRC = $(addsuffix .c, $(FILES))

SRC_PATH = ./srcs/

SRCS = $(addprefix $(SRC_PATH),$(SRC))

OBJ_PATH = ./objs/

OBJS = $(addprefix $(OBJ_PATH),$(SRC:.c=.o))

INCLUDES = -I ./includes/

HEADERS = includes/printf.h \

.PHONY: all clean fclean re test

all: $(NAME)

test:
	$(COMPILATEUR) ./main.c $(NAME) $(INCLUDES) $(FLAGS)

$(NAME): create_dir $(OBJS) $(HEADERS)
	@printf  "\033[92m\033[1:32mCompiling -------------> \033[91m$(NAME)\033[0m:\033[0m%-16s\033[32m[✔]\033[0m\n"
	@ar rcs $(NAME) $(OBJS)

objs/%.o: srcs/%.c $(HEADERS)
	@printf  "\033[1:92mCompiling $(NAME)\033[0m %-31s\033[32m[$<]\033[0m\n" ""
	@$(COMPILATEUR) -o $@ -c $< $(FLAGS) $(INCLUDES)
	@printf "\033[A\033[2K"

create_dir:
	@mkdir -p ./objs/

clean:
	@rm -rf $(OBJS)
	@printf  "\033[1:32mCleaning object files -> \033[91m$(NAME)\033[0m\033[1:32m:\033[0m%-16s\033[32m[✔]\033[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf ./objs/
	@printf  "\033[1:32mCleaning binary -------> \033[91m$(NAME)\033[0m\033[1:32m:\033[0m%-16s\033[32m[✔]\033[0m\n"

re: fclean all
