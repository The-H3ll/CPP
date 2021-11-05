//
// Created by Mouaad Labhairi on 11/5/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default Constructor\n";
}

void	MateriaSource::learnMateria(AMateria *mater) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			if (mater->getType() == "ice")
			{
				this->materia[i] = new Ice();
				this->materia[i] = mater;
			}
			else if (mater->getType() == "cure")
			{
				this->materia[i] = new Cure();
				this->materia[i] = mater;
			}
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
		{
			if (this->materia[i]->getType() == type)
				return (this->materia[i]);
		}
	}
	return 0;
}
