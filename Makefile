NAME = get_next_line

SRC = get_next_line.c \
	  get_next_line_utils.c \

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
BUFFER = -D BUFFER_SIZE=42
CFLAGS = -Wall -Werror -Wextra -Ilibft $(BUFFER)

all: $(NAME) $(LIBFT)

$(LIBFT): 
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rsc $(NAME) $(OBJ)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ) $(OBJ_LIBFT)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
