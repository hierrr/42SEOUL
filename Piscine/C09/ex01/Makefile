CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJ = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I./includes/ -o $@

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
