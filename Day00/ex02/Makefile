
NAME= Account

CC = clang++

FLAGS = -Wall -Wextra -Werror

SRCS = tests.cpp Account.cpp

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o account

clean:
	rm -rf $(NAME)

re: clean all