NAME = test
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3

LIBFT_PATH = ../
LIBFT = $(LIBFT_PATH)libft.a

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -lbsd -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.txt

re: fclean all

.PHONY: all clean fclean re

