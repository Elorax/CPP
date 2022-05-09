SRCS	=		main.cpp	\
			Harl.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXX	=	c++
RM	=	rm -rf

CXXFLAGS	=	-Wall -Wextra -Werror

NAME	=	harlFilter

#%.o: %.cpp
#		$(CCPP) $(CPPFLAGS) -I -c $< -o $@

$(NAME): $(OBJS)
		$(CCPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
