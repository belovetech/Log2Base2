.PHONY: all clean oclean fclean re

CC=gcc
SRC=stack.c DFS.c
OBJ=$(SRC:%.c=%.o)
NAME=DFS
CFLAGS= -Wall -Wextra -Werror
RM=rm -f

all: $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all