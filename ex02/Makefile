NAME     = brain
CC      = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS     = main.cpp
OBJS     = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re