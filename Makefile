SRC	=	src/main.c \
		src/my_filesinfo.c \
		src/my_permissions.c \
		src/my_functions_call.c \
		src/my_strcat.c \
		src/my_flags.c \
		src/my_rnorme.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-W -Wextra -Werror -Wall -Werror -L./lib/my -lmy -I./include -g3

NAME	=	my_ls

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	make clean -C ./lib/my/
	$(RM) $(OBJ)

fclean: clean
	make fclean -C ./lib/my/
	$(RM) $(NAME)

lib:
	make re -C ./lib/my/

re: fclean lib all