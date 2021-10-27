
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

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}
