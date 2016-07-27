NAME =			Sully

CC =			g++ $(FLAGS) $(SRC)

SRC =			Sully.cpp

FLAGS =			-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):
				$(CC) -o $(NAME)

fclean:
				rm -f  $(NAME)

re:				fclean all

.PHONY:			all  re fclean
.SILENT:

%.o:			%.c
				$(CC) -c $< -o $@