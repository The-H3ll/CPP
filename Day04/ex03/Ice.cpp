//
// Created by Mouaad Labhairi on 11/3/21.
//


#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default constructor\n";
	this->type = "ice";
}

Ice::Ice(const Ice &ice) {

	this->type = ice.type;
}

void	Ice::operator= (const Ice &ice)
{
	this->type = ice.type;
}

AMateria*	Ice::clone() const {
	return (new Ice());
}

Ice::~Ice() {
	std::cout << "ICE Destructor\n";
}
