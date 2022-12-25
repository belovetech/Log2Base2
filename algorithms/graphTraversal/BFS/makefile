.PHONY: all clean oclean fclean re

CC=gcc
SRC=queue.c BFS.c
OBJ=$(SRC:%.c=%.o)
NAME=BFS
RM=rm -f
CFLAGS= -Wall -Werror -Wextra

all: $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all