CFLAGS = -Wall -Wextra -Werror

NAME = Zombie

SRCS =	./main.cpp \
		./Zombie.cpp \
		./newZombie.cpp \
		./randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(CFLAGS) $^ -o $@

%.o: %.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re: clean all

run:
	make re
	./Zombie "pepe" "juan" "rafa" 
.PHONY: all clean re