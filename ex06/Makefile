NAME = harl

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

RM  = rm -f

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY:		all clean fclean re

$(NAME):	$(OBJS) Harl.hpp
			$(CPP) $(CPPFLAGS) $(OBJS) -o $@

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all