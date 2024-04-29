NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c ft_isalpha.c \
ft_isdigit.c ft_isascii.c ft_isprint.c \
 ft_strlen.c ft_memset.c ft_bzero.c \
 ft_memcpy.c ft_atoi.c ft_memmove.c \
 ft_strlcpy.c ft_strlcat.c ft_toupper.c \
 ft_tolower.c ft_strchr.c ft_strrchr.c \
 ft_strncmp.c ft_memchr.c ft_memcmp.c \
 ft_strnstr.c ft_strdup.c ft_calloc.c \
 ft_substr.c ft_strjoin.c ft_strtrim.c \
 ft_split.c ft_putchar_fd.c ft_putstr_fd.c \
 ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
 ft_striteri.c ft_itoa.c

SRC_BONUS = ft_lstnew_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ) $(OBJ_BONUS)
	
fclean:	clean
	rm -f $(NAME)
	
re:	fclean all bonus
.PHONY: all clean fclean re
