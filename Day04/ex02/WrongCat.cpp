//
// Created by Mouaad Labhairi on 10/30/21.
//

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "Cat Default constructor" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat( const WrongCat & Cat)
{
	this->type = Cat.type;
	std::cout << "Cat Default constructor" << std::endl;
}

void    WrongCat::operator = ( const WrongCat & Cat)
{
	this->type = Cat.type;
	std::cout << "Equal Cat operator " << std::endl;
}

std::string 	WrongCat::getType() const
{
	return (this->type);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "MIAW MIAW !!!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Cat Destructor" << std::endl;
}
