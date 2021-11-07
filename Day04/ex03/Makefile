
NAME = materia

CC= clang++

FLAGS= -Wall -Wextra -Werror

SRCS= AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp \
	IMateriaSource.cpp main.cpp MateriaSource.cpp

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
