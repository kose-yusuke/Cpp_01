NAME     = zombie
CC      = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS     = main.cpp Zombie.cpp newZombie.cpp ramdomChump.cpp
OBJS     = $(SRCS:.cpp=.o)
INCLUDES	= -I .
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re