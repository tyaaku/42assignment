NAME = push_swap.a
SRC = is_sorted.c\
	operator.c\
	fill_list.c\
	tiny_sort.c\
	tiny_sort_r.c\
	semi_tiny_sort.c\
	semi_tiny_sort_r.c\
	display_list.c\
	push_swap.c\
	check_list.c\
	get_assyuku_zahyou.c\
	ft_strjoin_ps.c\
	quick_sort.c\
	ft_lst_ps.c
SRC2_DIR = KKK
SRCS2 = $(addprefix $(SRC2_DIR)/, \
	do_pa.c\
	do_pb.c\
	do_ra.c\
	do_rb.c\
	do_rr.c\
	do_rra.c\
	do_rrb.c\
	do_rrr.c\
	do_sa.c\
	do_sb.c\
	do_ss.c)
OBJ = $(SRC:.c=.o)
OBJ2 = $(SRCS2:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
TEST = push_swap

all: $(NAME) $(TEST)

$(NAME): $(OBJ) $(OBJ2) libft
	@ar rcs $(NAME) $(OBJ) $(OBJ2) libft/*.o

libft:
	@$(MAKE) -C libft

%.o: %.c
	@$(CC) -I. -c $< -o $@

$(TEST): main.c $(NAME) libft
	@$(CC) $(CFLAGS) -I. main.c $(NAME) -o $(TEST)

clean:
	@rm -f $(OBJ) $(OBJ2)
	@$(MAKE) -C libft fclean

fclean: clean
	@rm -f $(NAME) $(TEST)

f: fclean

re: fclean all

.PHONY: all clean fclean re libft
