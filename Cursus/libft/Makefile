NAME = libft.a
SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3
INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

bonus: all
		# Add any bonus-specific compilation steps here

so:
		$(CC) -fPIC $(CFLAGS) $(SRC) $(INCLUDES)
		$(CC) -shared -o libft.so $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
