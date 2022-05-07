SRCS	=		main.cpp	\
			ClapTrap.cpp	\
			ScavTrap.cpp	\
			FragTrap.cpp

OBJS	=	$(SRCS:.cpp=.o)

CCPP	=	g++
RM	=	rm -rf

CPPFLAGS	=	-Wall -Wextra -Werror

NAME	=	scappy

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
