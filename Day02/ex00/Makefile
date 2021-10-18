
NAME= fixed

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= main.cpp fixed.cpp 

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
