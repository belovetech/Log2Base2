.PHONY: all clean oclean fclean re

CC = gcc
SRC = main.c get_new_node.c delete_node.c insert_node.c search_node.c inorder.c
OBJ = $(SRC:%.c=%.o)
NAME = bts
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all: $(OBJ)
		$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all