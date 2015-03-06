SRC =	fdf.c hook.c parser.c draw.c iso_converter.c ft_init.c error.c \
		ft_color.c

OBJ =	fdf.o hook.o parser.o draw.o iso_converter.o ft_init.o error.o \
		ft_color.o

LIB = libft/libft.a

INC = libft/ ./ minilibx/

NAME = fdf

FLAGS = -Wall -Wextra -Werror

XFLAG = -lmlx -lXext -lX11

all: libft.a $(NAME)

$(NAME): $(OBJ)
	gcc -g $(FLAG) -c $(SRC) -I $(INC)
	gcc -o $(NAME) $(OBJ) -L/usr/X11/lib $(XFLAG) -L. $(LIB)

libft.a:
	make -C libft/

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all