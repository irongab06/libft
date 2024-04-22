CC = cc
CFFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_isalpha.c ft_isprint.c ft_strlen.c \
ft_bzero.c ft_isascii.c ft_memcpy.c ft_isalnum.c ft_isdigit.c ft_memset.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
	$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.o.c:
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY : clean fclean

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
