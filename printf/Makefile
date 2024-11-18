NAME = ft_printf.a
FLAGS = -I -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC_FILES = ./src/ft_printf.c \
			./src/ft_print_hexl.c \
			./src/ft_print_hexu.c \
			./src/ft_print_nb.c \
			./src/ft_print_ptr.c \
			./src/ft_print_putchar.c \
			./src/ft_print_putstr.c \
			./src/ft_print_unb.c \

OBJ = $(SRC_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "--------\n MAKE FT_PRINTF \n--------"
		@$(AR) $(NAME) $(OBJ)

%.o:%.c
		@gcc -c $(FLAGS) $< -o $@
		

clean:
		@echo "--------\n removing OBJ files FT_PRINTF \n--------"
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)
		@echo "--------\n removing FT_PRINTF \n--------"

re: fclean all

.PHONY: all clean fclean re
