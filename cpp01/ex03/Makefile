CFLAGS = -Wall -Wextra -Werror

NAME = Main

SRCS =	./main.cpp ./HumanA.cpp \
		./HumanB.cpp ./Weapon.cpp

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

.PHONY: all clean re