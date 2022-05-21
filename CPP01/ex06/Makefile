# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 04:49:21 by abiersoh          #+#    #+#              #
#    Updated: 2022/05/21 04:49:29 by abiersoh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
