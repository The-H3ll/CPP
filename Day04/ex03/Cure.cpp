//
// Created by Mouaad Labhairi on 11/3/21.
//

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Default constructor\n";
	this->type = "cure";
}

Cure::Cure(const Cure &cure) {

	this->type = cure.type;
}

void	Cure::operator= (const Cure &cure)
{
	this->type = cure.type;
}

AMateria*	Cure::clone() const {
	return (new Cure());
}

std::string	const  &Cure::getType() const {
	return this->type;
}

Cure::~Cure() {
	std::cout << "Cure Destructor\n";
}