# mingw32-make win
# make all

SRC		=	./src/main.c	\
			./src/lib/*c	\

NAME	=	Posto_de_saude

CC		=	gcc

RM		=	rm -f

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-std=c99

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) -o $(NAME) $(SRC) $(CFLAGS)

win		:
			$(CC) -o $(NAME)_win $(SRC) $(CFLAGS)
			cls
