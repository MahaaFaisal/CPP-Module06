CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = Utils.cpp main.cpp ScalarConverter.cpp helpers.cpp
NAME = scalar

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all