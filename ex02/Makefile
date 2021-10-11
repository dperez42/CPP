NAME = test
SRCS_DIR = ./
SRCS =	Account.cpp \
		test.cpp
INCS_DIR = Account.hpp
# FLAGS ====================================================================================
INCLUDES = -I$(INCS_DIR)
FLAGS = -Wall -Wextra
# OBJS =====================================================================================
OBJS_DIR 	= 	myobjs/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))
# ==========================================================================================

# FROM SUBJECT =============================================================================
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INCS_DIR)
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ -g -fsanitize=address $(FLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

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
