CC=gcc
CFLAGS= -Wall -Wextra -Werror

SRC= ./src/main.c ./src/paint.h
NAME=paint

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	/bin/rm $(NAME) 

re: fclean all
