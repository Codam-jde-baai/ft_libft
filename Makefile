NAME =  libft.a
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I ./include
AR = ar rcs
RM = rm -f

SRC_PRINTF = ./printf/ft_printf.a
SRC_CHARACTER = ./character/ft_isalnum.c ./character/ft_isalpha.c ./character/ft_isascii.c ./character/ft_isdigit.c ./character/ft_isprint.c ./character/ft_tolower.c ./character/ft_toupper.c
SRC_GENERAL = ./general/ft_atoi.c ./general/ft_itoa.c ./general/ft_split.c
SRC_LIST = ./linked_list/ft_lstnew.c ./linked_list/ft_lstadd_front.c ./linked_list/ft_lstsize.c ./linked_list/ft_lstlast.c ./linked_list/ft_lstadd_back.c ./linked_list/ft_lstdelone.c ./linked_list/ft_lstclear.c ./linked_list/ft_lstiter.c ./linked_list/ft_lstmap.c
SRC_MEMORY = ./memory/ft_bzero.c ./memory/ft_calloc.c ./memory/ft_memchr.c ./memory/ft_memcmp.c ./memory/ft_memcpy.c ./memory/ft_memmove.c ./memory/ft_memset.c
SRC_write = ./write/ft_putchar_fd.c ./write/ft_putstr_fd.c ./write/ft_putendl_fd.c ./write/ft_putnbr_fd.c
SRC_STRING = ./string/ft_strchr.c ./string/ft_strdup.c ./string/ft_strlcat.c ./string/ft_strlcpy.c ./string/ft_strlen.c ./string/ft_strncmp.c ./string/ft_strnstr.c ./string/ft_strrchr.c ./string/ft_substr.c ./string/ft_strjoin.c ./string/ft_strtrim.c ./string/ft_strmapi.c ./string/ft_striteri.c
SRC_GET_NEXT_LINE = ./get_next_line/get_next_line.c ./get_next_line/get_next_line_utils.c
SRC_VECTOR = ./vector/ft_vec_add.c ./vector/ft_vec_count.c ./vector/ft_vec_free.c ./vector/ft_vec_insert.c ./vector/ft_vec_replace.c ./vector/ft_vec_apply.c ./vector/ft_vec_find.c ./vector/ft_vec_init.c ./vector/ft_vec_remove.c ./vector/ft_vec_resize.c
SRC_EXTRA = ./extra/ft_realloc.c ./extra/ft_dup_array.c ./extra/ft_free_array.c ./extra/array_len.c

SRC += $(SRC_CHARACTER) $(SRC_GENERAL) $(SRC_LIST) $(SRC_MEMORY) $(SRC_write) $(SRC_STRING) $(SRC_GET_NEXT_LINE) $(SRC_VECTOR) $(SRC_EXTRA) 

OBJDIR = objects
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

DIRECTORY = $(dir $(SRC))
SPLIT = $(DIRECTORY:/=)
CAT = $(addprefix $(OBJDIR)/, $(DIRECTORY))

all: $(NAME)

$(NAME): $(OBJ)
	@printf "\033[1;34m-------------------\n MAKE LIBFT \n-------------------\n\033[0m"
	@$(AR) $(NAME) $(OBJ)

$(OBJDIR):
	@printf "\033[1;34m---------\n building objects \n---------\n\033[0m"
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:%.c | $(OBJDIR)
	@mkdir -p $(CAT)
	@gcc $(FLAGS) $(INCLUDE) -c $< -o $@


printf: $(NAME) $(OBJ)
	@if [ ! -f "$(SRC_PRINTF)" ]; then \
		printf "\033[1;32m--------\n including printf \n--------\n\033[0m"; \
		make -C ./printf; \
		rm -f $(NAME); \
		cp $(SRC_PRINTF) $(NAME); \
		$(AR) $(NAME) $(OBJ); \
		printf "\033[1;34m--------\n combining printf + libft \n--------\n\033[0m"; \
	else \
		printf "\033[1;33m--------\n ft_printf.a already included \n--------\n\033[0m"; \
	fi

clean:
	@if [ -d "$(OBJDIR)" ]; then \
		printf "\033[1;34m--------------\n removing OBJ files LIBFT \n--------------\n\033[0m"; \
		$(RM) -r $(OBJDIR); \
	else \
		printf "Nothing to clean.\n"; \
	fi

fclean: clean
		@if [ -f "$(SRC_PRINTF)" ]; then \
			make fclean -C ./printf; \
		fi
		@if [ -f "$(NAME)" ]; then \
				printf "\033[1;34m--------------\n removing libft.a \n--------------\n\033[0m"; \
				$(RM) $(NAME); \
			else \
				printf "Nothing to fclean.\n"; \
			fi

re: fclean all

.PHONY: all clean fclean re printf
