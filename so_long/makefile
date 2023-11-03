NAME = a.out
MINILIBX = minilibx-linux/libmlx.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c get_image.c display_map.c create_map.c free_all.c event.c correct_info.c
OBJS = $(SRCS:%.c=%.o)

FRAMEWORK = -L /usr/X11/lib -lXext -L ./minilibx-linux -lmlx -I ./minilibx-linux -lX11 -lm


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FRAMEWORK) -o $(NAME)
$(MINILIBX): empty
	make -C minilibx-linux

empty:

%.o:%.c
	$(CC) -o $@ -c $< -I ./minilibx-linux/

clean:
	rm -f $(OBJS)
#	make clean -C minilibx-linux || :
fclean: clean
	rm -f $(NAME)
#	rm -f $(MINILIBX) || :
re: fclean all

f: fclean

.PHONY: all clean fclean re f
