
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor" << std::endl;
    this->type = "Default Animal ";
}

Animal::Animal( const Animal & animal)
{
    this->type = animal.type;
    std::cout << "Animal Default constructor" << std::endl;
}

void    Animal::operator = ( const Animal & animal)
{
    this->type = animal.type;
    std::cout << "Equal Animal operator " << std::endl;
}

std::string 	Animal::getType() const
{
	return (this->type);
}

void 	Animal::makeSound() const
{
	std::cout << " Animal Sound\n";
}


Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}
