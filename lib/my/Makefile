SRC	=	my_printf.c \
		my_putchar.c \
		my_putstr.c \
		my_strlen.c \
		my_put_nbr.c \
		my_strncmp.c \
		my_ll_nbr.c \
		my_unsigned_nbr.c \
		my_putnbr_base.c \
		print_char.c \
		print_int.c \
		print_lowhexa.c \
		print_octal.c \
		print_pointer.c \
		print_string.c \
		print_uphexa.c \
		print_binary.c \
		print_unsigned.c \
		print_sharpo.c \
		print_sharphexa.c \
		print_sharphexaup.c \
		print_lli.c \
		flags_check.c \
		handle_cases.c \
		my_conditions.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-std=c99 -W -Wall -Wextra -Werror -I../../include/

RM	=	rm -f

HEAD	=	my.h

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ) $(HEAD)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
