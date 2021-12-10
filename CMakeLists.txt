cmake_minimum_required(VERSION 3.17)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(Day00/ex00)
include_directories(Day00/ex01)
include_directories(Day00/ex02)
include_directories(Day01/ex00)
include_directories(Day01/ex01)
include_directories(Day01/ex03)
include_directories(Day01/ex05)
include_directories(Day01/ex06)
include_directories(Day02/ex00)
include_directories(Day02/ex01)
include_directories(Day02/ex02)
include_directories(Day03/ex00)
include_directories(Day03/ex01)
include_directories(Day03/ex02)
include_directories(Day03/ex03)
include_directories(Day04/ex00)

add_executable(c__
        Day00/ex00/megaphone.cpp
        Day00/ex01/phone_book.class.cpp
        Day00/ex01/phone_book.cpp
        Day00/ex01/phone_book.hpp
        Day00/ex02/Account.cpp
        Day00/ex02/Account.hpp
        Day00/ex02/tests.cpp
        Day01/ex00/main.cpp
        Day01/ex00/newZombie.cpp
        Day01/ex00/randomChump.cpp
        Day01/ex00/Zombie.cpp
        Day01/ex00/Zombie.hpp
        Day01/ex01/main.cpp
        Day01/ex01/Zombie.cpp
        Day01/ex01/Zombie.hpp
        Day01/ex01/ZombieHorde.cpp
        Day01/ex02/main.cpp
        Day01/ex03/HumanA.cpp
        Day01/ex03/HumanA.hpp
        Day01/ex03/HumanB.cpp
        Day01/ex03/HumanB.hpp
        Day01/ex03/main.cpp
        Day01/ex03/Weapon.cpp
        Day01/ex03/Weapon.hpp
        Day01/ex04/main.cpp
        Day01/ex05/Karen.cpp
        Day01/ex05/Karen.hpp
        Day01/ex05/main.cpp
        Day01/ex06/Karen.cpp
        Day01/ex06/Karen.hpp
        Day01/ex06/main.cpp
        Day02/ex00/Fixed.cpp
        Day02/ex00/Fixed.hpp
        Day02/ex00/main.cpp
        Day02/ex01/Fixed.cpp
        Day02/ex01/Fixed.hpp
        Day02/ex01/main.cpp
        Day02/ex02/Fixed.cpp
        Day02/ex02/Fixed.hpp
        Day02/ex02/main.cpp
        Day03/ex00/ClapTrap.cpp
        Day03/ex00/ClapTrap.hpp
        Day03/ex00/main.cpp
        Day03/ex01/ClapTrap.cpp
        Day03/ex01/ClapTrap.hpp
        Day03/ex01/main.cpp
        Day03/ex01/ScavTrap.cpp
        Day03/ex01/ScavTrap.hpp
        Day03/ex02/ClapTrap.cpp
        Day03/ex02/ClapTrap.hpp
        Day03/ex02/FragTrap.cpp
        Day03/ex02/FragTrap.hpp
        Day03/ex02/main.cpp
        Day03/ex02/ScavTrap.cpp
        Day03/ex02/ScavTrap.hpp
        Day03/ex03/ClapTrap.cpp
        Day03/ex03/ClapTrap.hpp
        Day03/ex03/DiamondTrap.cpp
        Day03/ex03/DiamondTrap.hpp
        Day03/ex03/FragTrap.cpp
        Day03/ex03/FragTrap.hpp
        Day03/ex03/main.cpp
        Day03/ex03/ScavTrap.cpp
        Day03/ex03/ScavTrap.hpp
        Day04/ex00/Animal.cpp
        Day04/ex00/Animal.hpp
        Day04/ex00/Cat.cpp
        Day04/ex00/Cat.hpp
        Day04/ex00/Dog.cpp
        Day04/ex00/Dog.hpp
        Day04/ex00/main.cpp Day04/ex00/WrongAnimal.cpp Day04/ex00/WrongCat.cpp Day04/ex00/WrongCat.hpp
        Day04/ex01/Animal.cpp
        Day04/ex01/Animal.hpp
        Day04/ex01/Cat.cpp
        Day04/ex01/Cat.hpp
        Day04/ex01/Dog.cpp
        Day04/ex01/Dog.hpp
        Day04/ex01/main.cpp Day04/ex01/WrongAnimal.cpp Day04/ex01/WrongCat.cpp Day04/ex01/WrongCat.hpp
        Day04/ex01/Brain.cpp Day04/ex01/Brain.hpp Day04/ex03/main.cpp Day04/ex03/AMateria.hpp Day04/ex03/AMateria.cpp Day04/ex03/ICharacter.cpp Day04/ex03/ICharacter.hpp Day04/ex03/IMateriaSource.cpp Day04/ex03/IMateriaSource.hpp Day04/ex03/Ice.cpp Day04/ex03/Ice.hpp Day04/ex03/Cure.cpp Day04/ex03/Cure.hpp Day04/ex03/Character.cpp Day04/ex03/Character.hpp Day04/ex03/MateriaSource.cpp Day04/ex03/MateriaSource.hpp
        Day05/ex00/Bureaucrat.cpp Day05/ex00/Bureaucrat.hpp Day05/ex00/main.cpp
        Day05/ex01/Form.cpp Day05/ex01/Form.hpp
        Day05/ex01/Bureaucrat.cpp Day05/ex01/Bureaucrat.hpp Day05/ex01/main.cpp
        Day05/ex02/ShrubberyCreation.cpp Day05/ex02/ShrubberyCreation.hpp Day05/ex02/RobotmyRequestForm.cpp Day05/ex02/RobotmyRequestForm.hpp Day05/ex02/PresidentialPardonForm.cpp Day05/ex02/PresidentialPardonForm.hpp
        Day05/ex02/Form.cpp Day05/ex02/Form.hpp
        Day05/ex02/Bureaucrat.cpp Day05/ex02/Bureaucrat.hpp Day05/ex02/main.cpp Day05/ex02/Intern.cpp Day05/ex02/Intern.hpp
        Day05/ex02/ShrubberyCreation.cpp Day05/ex02/ShrubberyCreation.hpp Day05/ex02/RobotmyRequestForm.cpp Day05/ex02/RobotmyRequestForm.hpp Day05/ex02/PresidentialPardonForm.cpp Day05/ex02/PresidentialPardonForm.hpp
        Day05/ex03/Form.cpp Day05/ex03/Form.hpp
        Day05/ex03/Bureaucrat.cpp Day05/ex03/Bureaucrat.hpp Day05/ex03/main.cpp Day05/ex03/Intern.cpp Day05/ex03/Intern.hpp
        Day06/ex00/main.cpp Day06/ex00/Check.cpp Day06/ex00/Check.hpp Day06/ex01/main.cpp Day06/ex02/Base.cpp Day06/ex02/Base.hpp Day06/ex02/main.cpp Day07/ex00/main.cpp Day07/ex00/Temp.hpp Day07/ex01/main.cpp Day07/ex01/iter.hpp)
