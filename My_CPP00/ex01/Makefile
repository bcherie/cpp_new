.PHONY:	all clean fclean re

NAME = phonebook

INCS = PhoneBook.hpp Contact.hpp

SRCS =	Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:		$(NAME)

$(NAME):	$(OBJS) $(INCS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
