
NAME= zombie

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o zombie

clean:
	rm -rf $(NAME)

re: clean all
