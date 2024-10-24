NAME     = harlFilter
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS     = main.cpp Harl.cpp
OBJS     = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re