CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp base.cpp functions.cpp Utils.cpp
NAME = identifier

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all