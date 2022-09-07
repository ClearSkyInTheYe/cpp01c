NAME = ex02

CPP = c++

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

$(NAME) :
	$(CPP) $(CPPFLAGS) main.cpp -o $(NAME)

all: $(NAME)

clean	:
		rm -rf  $(NAME)

fclean	:	clean

re		:	fclean $(NAME)