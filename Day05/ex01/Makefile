

NAME = grades

CC = clang++

SRCS = main.cpp Bureaucrat.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
