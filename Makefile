NAME = printf
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CC = cc -Wall -Werror -Wextra

.PHONY: all clean fclean re
	
all: $(NAME)
$(NAME): $(OBJ)
	 $(CC) $(OBJ) -o $(NAME)
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ)
fclean:
	rm -rf $(NAME) $(OBJ)
re:	fclean all
