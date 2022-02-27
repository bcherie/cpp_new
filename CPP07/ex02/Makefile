SRC = main.cpp Array.cpp

NAME = cpp07

OBJS	= ${SRC:.cpp=.o}
CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
		${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f *.o *_shrubbery

fclean: clean
		rm -f $(NAME)

re:			fclean all
