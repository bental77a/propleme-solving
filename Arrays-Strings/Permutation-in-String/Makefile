CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11 -g3

INFILES = solution.cpp

OBJFILES = $(INFILES:.cpp=.o)

NAME = execute

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CXX) $(CXXFLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJFILES) $(EXTRA_FILES)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
