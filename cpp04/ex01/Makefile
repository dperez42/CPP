NAME= main
SRC = 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
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

re:	fclean all

.PHONY: all fclean clean re
