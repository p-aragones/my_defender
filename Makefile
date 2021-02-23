##
## EPITECH PROJECT, 2020
## defender
## File description:
## Makefile
##

NAME	=	my_sokoban

CFLAGS	+=	-I ./include/ -I ./lib/include/
CFLAGS	+=	-lcriterion

LDLIBS	+=	-L./lib/ -lmy

LIB		=	-lncurses

PATH_SRC	=	./src/

RWILDCARD	=	$(foreach d,$(wildcard $1*),$(call RWILDCARD,$d/,$2) $(filter $(subst *,%,$2),$d))

SRC		+=	$(call RWILDCARD,$(PATH_SRC),*.c)

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

RM		=	rm -rf

all:	$(NAME)

$(NAME):	make_lib $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDLIBS) $(LIB)

make_lib:
	make -C lib/

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C lib/

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C lib/

re:	fclean all
	$(MAKE) re -C lib/

auteur:
	echo $(USER) > auteur
