NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c ft_putnbr_base2.c\
	handeling.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rc  $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
