NAME = libft.a
SRC = ./srcs
INC = ./includes
OBJ = .

LIST_SRC = $(SRC)/ft_strlen.c \
		   $(SRC)/ft_putchar.c \
		   $(SRC)/ft_putchar_fd.c \
		   $(SRC)/ft_putstr.c \
		   $(SRC)/ft_putstr_fd.c \
		   $(SRC)/ft_putendl.c \
		   $(SRC)/ft_putendl_fd.c \


LIST_OBJ = $(LIST_SRC:$(SRC)/%.c=$(OBJS)%.o)

all : $(NAME)

$(NAME) : $(LIST_SRC)
	gcc -Wall -Wextra -Werror -I $(INC) $(LIST_SRC) -c
	ar rc libft.a $(LIST_OBJ)

clean :
	/bin/rm -f $(LIST_OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
