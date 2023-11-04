# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 20:10:06 by abiersoh          #+#    #+#              #
#    Updated: 2022/05/23 20:10:07 by abiersoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp			\
			AMateria.cpp		\
			Cure.cpp			\
			Ice.cpp				\
			ICharacter.cpp		\
			Character.cpp		\
			MateriaSource.cpp	\
			IMateriaSource.cpp	

OBJS	=	$(SRCS:.cpp=.o)

CXX	=	c++
RM	=	rm -rf

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

NAME	=	omgLaMagie

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
