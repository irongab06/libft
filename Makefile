NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c ft_isalpha.c \
ft_isdigit.c ft_isascii.c ft_isprint.c \
 ft_strlen.c ft_memset.c ft_bzero.c \
 ft_memcpy.c ft_atoi.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)
    $(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
	
clean:
	rm -f $(OBJ)
	
fclean:	clean
	rm -f $(NAME)
	
re:	fclean all
.PHONY: all clean fclean re
