# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 04:43:19 by abiersoh          #+#    #+#              #
#    Updated: 2022/05/21 04:43:20 by abiersoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		zombieHorde.cpp	\
			Zombie.cpp	\
			main.cpp	\

OBJS	=	$(SRCS:.cpp=.o)

CXX	=	c++
RM	=	rm -rf

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	Braaaaiiiiinnnzzzz

#%.o: %.cpp
#		$(CXX) $(CXXFLAGS) -I -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
