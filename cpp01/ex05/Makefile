NAME		=	Karen

SRCS		=	./main.cpp \
				./Karen.cpp

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

all :		$(NAME)
$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean :
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re