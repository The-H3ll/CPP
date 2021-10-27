

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat Default constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat & Cat)
{
    this->type = Cat.type;
    std::cout << "Cat Default constructor" << std::endl;
}

void    Cat::operator = ( const Cat & Cat)
{
    this->type = Cat.type;
    std::cout << "Equal Cat operator " << std::endl;
}

void	Cat::makeSound( void )
{
	std::cout << "MIAW MIAW !!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}