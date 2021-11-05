NAME= poly

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= main.cpp Cat.cpp Animal.cpp Dog.cpp Brain.cpp

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
