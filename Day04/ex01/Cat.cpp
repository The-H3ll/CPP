

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat Default constructor" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
	this->brain->ideas[0] = "hello from cat";
}


Cat::Cat(std::string str[])
{
	std::cout << "Cat Array constructor \n";
	brain = new Brain();
	this->type = "Cat";
	for (unsigned long i = 0 ; i < str->length(); i++)
	{
		brain->ideas[i] = str[i];
	}
}


Cat::Cat( const Cat & Cat)
{
	std::cout << "Cat Deep Copy constructor" << std::endl;
	this->type = Cat.type;
	this->brain = new Brain();
	*(this->brain) = *(Cat.brain);
}

void    Cat::operator = ( const Cat & Cat)
{
    this->type = Cat.type;
    std::cout << "Equal Cat operator " << std::endl;
}

std::string	*Cat::getBrain()
{
	return (this->brain->ideas);
}


void	Cat::makeSound( void ) const
{
	std::cout << "MIAW MIAW !!!" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
	std::cout << "Cat Destructor" << std::endl;
}