

#include "Dog.hpp"


Dog::Dog()
{
	brain = new Brain();
    std::cout << "Dog Default constructor" << std::endl;
	this->type = "Dog";
	this->brain->ideas[0] = "Hello from dog";
}

Dog::Dog(std::string str[])
{
	std::cout << "Dog Array constructor\n";
	brain = new Brain();
	this->type = "Dog";
	for (unsigned long i = 0 ; i < str->length(); i++)
	{
		brain->ideas[i] = str[i];
	}
}

Dog::Dog( const Dog & Dog)
{
    this->type = Dog.type;
	this->brain = new Brain();
	this->brain = Dog.brain;
    std::cout << "Dog Deep Copy constructor" << std::endl;
}

Dog    Dog::operator = ( const Dog & dog)
{
    std::cout << "Equal Dog operator " << std::endl;
	return (dog);
}

//std::string 	Dog::getType() const
//{
//	return (this->type);
//}

void	Dog::makeSound( void ) const
{
	std::cout << "WOAF WOAF !!!" << std::endl;
}

std::string	*Dog::getBrain()
{
	return (this->brain->ideas);
}

Dog::~Dog()
{
    delete brain;
	std::cout << "Dog Destructor" << std::endl;
}