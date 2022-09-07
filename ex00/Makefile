NAME		=	zombie

SRCS		=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

CPPFLAGS	= 	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f

.PHONY:		all clean fclean re

$(NAME):	$(OBJS) Zombie.hpp
			$(CC) $(CPPFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all