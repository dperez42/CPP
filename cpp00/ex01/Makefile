NAME = phonebook
SRCS_DIR = ./
SRCS =	Phonebook_class.cpp \
		Contact_class.cpp \
		main.cpp 
INCS_DIR = Phonebook_class.hpp \
		Contact_class.hpp
# FLAGS ====================================================================================
INCLUDES = -I $(INCS_DIR)
FLAGS = -Wall -Wextra -Werror 
# OBJS =====================================================================================
OBJS_DIR 	= 	myobjs/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))
# ==========================================================================================
# FROM SUBJECT =============================================================================
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INCS_DIR)
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@
$(NAME): $(OBJS)
	@clang++ -g $(FLAGS)  -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re: fclean all
.PHONY: all fclean re clean
# ==========================================================================================

# SUP ======================================================================================
run: $(NAME)
	./$(NAME)
# ==========================================================================================
