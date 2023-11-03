NAME = libftprintf.a
SRC = ft_itoa_base_un.c\
	ft_printf.c\
	ft_putchar.c\
	ft_putnbrs.c\
	ft_putstr.c\
	ft_is_ope_set.c\
	ft_use_operater.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

libft:
	@$(MAKE) -C libft

$(NAME): $(OBJ) libft
	@ar rcs $(NAME) $(OBJ) libft/*.o

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@$(MAKE) -C libft fclean

fclean: clean
	@rm -f $(NAME)

f: fclean

re: fclean all

.PHONY: all clean fclean re f libft
