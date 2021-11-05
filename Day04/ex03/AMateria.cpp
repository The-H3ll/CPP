//
// Created by Mouaad Labhairi on 11/3/21.
//

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default Amateria constructor\n";
}

AMateria::AMateria(std::string const & type)
{
	this->type  = type;
}

AMateria::AMateria(const AMateria &aMateria)
{
	this->type = aMateria.type;
}

void	AMateria::operator=(const AMateria &materia)
{
	this->type = materia.type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Shoot an Ice  at " << target.getName() << std::endl;
	std::cout << "Heals " << target.getName() << "'s wound\n";
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

AMateria::~AMateria() {
	std::cout << "Amateria Destructor\n";
}


