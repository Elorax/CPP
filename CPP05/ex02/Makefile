SRCS	=	main.cpp		\
			Bureaucrat.cpp	\
			Form.cpp		\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

CXX	=	c++
RM	=	rm -rf

CXXFLAGS	=	-Wall -Wextra -Werror

NAME	=	Megaforms

#%.o: %.cpp
#		$(CCPP) $(CPPFLAGS) -I -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
