NAME= array
SRC = 	main.cpp 
OBJ = $(SRC:.cpp=.o)
CXX = clang++ --std=c++98
CXXFLAGS = -Werror -Wall -Wextra 

all: $(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
clean:	
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY: all fclean clean re