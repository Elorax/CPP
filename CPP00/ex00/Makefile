SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	c++

CXXFLAGS		=	-Wall -Wextra -Werror

NAME		=	megaphone

$(NAME):			$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
