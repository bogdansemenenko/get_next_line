NAME = get_next_line

SRC = get_next_line.c \
	  get_next_line_utils.c \

OBJ = $(SRC:.c=.o)


CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME) 

$(NAME): $(OBJ) 
	ar -rsc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
