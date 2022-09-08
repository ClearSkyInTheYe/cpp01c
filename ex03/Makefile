NAME        =   EX03

SRCS        =   HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJS		=	$(SRCS:.cpp=.o)

D_FILES		=	$(SRCS:.cpp=.d)

CPP			=	c++

CPP_FLAGS	=	-Wall -Wextra -Werror -std=c++98

INCLUDES	=   -I.

.PHONY: all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CPP) $(CPP_FLAGS) $(INCLUDES) -c $< -o $@ -MMD -MP

include $(wildcard $(D_FILES))

clean   :
		rm -rf $(OBJS) $(D_FILES)

fclean  :   clean
		rm -rf  $(NAME)

re		:	fclean $(NAME)