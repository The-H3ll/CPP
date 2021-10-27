

#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "Dog Default constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog & Dog)
{
    this->type = Dog.type;
    std::cout << "Dog Default constructor" << std::endl;
}

void    Dog::operator = ( const Dog & Dog)
{
    this->type = Dog.type;
    std::cout << "Equal Dog operator " << std::endl;
}

void	Dog::makeSound( void )
{
	std::cout << "WOAF WOAF !!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}