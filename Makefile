CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
NAME = executable
RM = rm
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

VALGRIND = valgrind
V_FLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes

BT = betty
HEADER = $(wildcard *.h)

all:$(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	./$(NAME)

first:
	$(CC) $(CFLAGS) -c -o $(SRC)

clean:
	$(RM) -rf *~ $(NAME) $(OBJ)

betty:
	$(BT) $(SRC) $(HEADER)

memory:
	$(VALGRIND) $(V_FLAGS) ./$(NAME)