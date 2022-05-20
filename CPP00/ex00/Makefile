SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++
CXXFLAGS		=	-Wall -Wextra -Werror

NAME		=	megaphone

all:
				$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
