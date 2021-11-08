NAME= fixed
SRC = 	main.cpp \
		Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CC = clang++
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)
clean:	
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all clean
