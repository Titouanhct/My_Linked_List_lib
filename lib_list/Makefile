##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## ..
##

NAME	= liblist.a

SRC += create_list.c 
SRC += pushback.c
SRC += pushfront.c
SRC += popback.c
SRC += popfront.c

OBJ = $(SRC:.c=.o)

LDFLAGS = -L./ -llist

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc liblist.a $(OBJ)
	cp list.h ../include

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
