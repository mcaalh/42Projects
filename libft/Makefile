NAME = libft.a

SRC = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strcat.c \
		ft_strclr.c \
		ft_strcpy.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strchr.c \
		ft_memmove.c \
		ft_memdel.c \
		ft_memalloc.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strrchr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strsub.c \
		ft_strlcat.c \
		ft_memccpy.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_atoi.c \
		ft_strsplit.c \
		ft_itoa.c \
		get_next_line.c

SRCO = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRCO)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Werror -Wextra -c $< -o $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
