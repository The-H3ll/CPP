//
// Created by Mouaad Labhairi on 10/30/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
	std::cout << "Wrong Animal Constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong)
{
	this->type = wrong.type;
	std::cout << "Copy Constructor\n";
}

void	WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
}

void	WrongAnimal::makeSound() {}
{
	std::cout << "Wrong Animal make sound\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor\n";
}
