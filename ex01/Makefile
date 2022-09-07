NAME		=	zombies

SRCS		=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -f


$(NAME):	$(OBJS) Zombie.hpp
			$(CPP) $(CPPFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re