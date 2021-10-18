

NAME= war

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= main.cpp   Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all