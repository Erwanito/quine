NAME =			Grace

CC =			gcc $(FLAGS) $(INCLUDES)

SRC =			Grace.c

OBJ =			$(SRC:.c=.o)

FLAGS =			-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) -o $(NAME) $(OBJ)
clean:
				rm -f $(OBJ)
fclean:
				rm -f $(OBJ) $(NAME)

re:				fclean all

.PHONY:			all clean re fclean
.SILENT:

%.o:			%.c
				$(CC) -c $< -o $@