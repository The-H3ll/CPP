//
// Created by Mouaad Labhairi on 11/5/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default Materia Constructor\n";
	for (int i = 0 ; i < 4; i++)
	{
		this->materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL)
		{
			delete this->materia[i];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (materia.materia[i] != NULL)
		{
			if (materia.materia[i]->getType() == "ice")
			{
				this->materia[i] = new Ice();
				this->materia[i] = materia.materia[i];
			}
			else if (materia.materia[i]->getType() == "cure")
			{
				this->materia[i] = new Cure();
				this->materia[i] = materia.materia[i];
			}
		}
	}

}

void	MateriaSource::learnMateria(AMateria *mater) {

	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			if (mater->getType() == "ice")
			{
	//			this->materia[i] = new Ice();
				this->materia[i] = mater;
			}
			else if (mater->getType() == "cure")
			{
	//			this->materia[i] = new Cure();
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
				return (this->materia[i]->clone());
		}
	}
	return 0;
}


MateriaSource::~MateriaSource()
{
	std::cout << "Defualt Destructor\n";
	for (int i = 0 ; i < 4; i++)
	{
		if (materia[i] == NULL)
			delete materia[i];
	}
}
