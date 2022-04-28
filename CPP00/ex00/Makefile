SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.c=.o)

CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	megaphone

all:
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
