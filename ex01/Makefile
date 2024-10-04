CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Serializer.cpp Utils.cpp Data.cpp
NAME = serializer

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all