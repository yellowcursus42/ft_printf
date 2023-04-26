SRC	= ft_print_c.c ft_print_d.c ft_printf.c ft_printf_utils.c \
	  ft_print_percent.c ft_print_ptr.c ft_print_str.c ft_print_u.c ft_print_x.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME		= libftprintf.a


all: $(NAME)

$(NAME): $(OBJ)
	ar -r $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
