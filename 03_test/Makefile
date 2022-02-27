CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -I.

RM			= rm -f

NAME		= claptrap

SRC			= main.cpp ClapTrap.cpp

INC			= ClapTrap.hpp

OBJ			= ${SRC:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
			@echo "[./claptrap] to run"

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
