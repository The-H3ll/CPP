

NAME = grades

CC = clang++

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreation.cpp RobotmyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all
