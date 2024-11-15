##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## ..
##

NAME	=	linked_list

SRC =   main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include/ -L lib_list/ -llist -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./lib_list/
	gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean :
	make clean -C ./lib_list/
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib_list
	rm -f $(NAME)

re: fclean all
