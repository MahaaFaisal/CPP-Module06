CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -Wfatal-errors
SRCS = main.cpp Bureaucrat.cpp Utils.cpp tests.cpp
NAME = scalar

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all