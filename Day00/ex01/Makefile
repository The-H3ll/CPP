NAME= phoneBook

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= phone_book.cpp phone_book.class.cpp


all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o phone_book

clean:
	rm -rf $(NAME)

re: clean all
