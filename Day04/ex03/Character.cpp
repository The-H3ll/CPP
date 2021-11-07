//
// Created by Mouaad Labhairi on 11/3/21.
//

#include "Character.hpp"


Character::Character()
{
	std::cout << "Default constructor\n";
	for (int i=0; i < 4 ;i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character( const Character &character)
{
	for (int i = 0 ; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	this->_name = character._name;
	for (int i = 0 ; i < 4; i++)
	{
		if (character.inventory[i]->getType() == "ice")
		{
			this->inventory[i] = new Ice();
			this->inventory[i] = character.inventory[i];
		}
		else if (character.inventory[i]->getType() == "cure")
		{
			this->inventory[i] = new Cure();
			this->inventory[i] = character.inventory[i];
		}
	}

}

Character::Character(std::string name) {
	this->_name = name;
}

void	Character::operator=(const Character &character){

	for (int i = 0 ; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	this->_name = character._name;
	for (int i = 0 ; i < 4; i++)
	{
		if (character.inventory[i] == NULL)
			return;
		if (character.inventory[i]->getType() == "ice")
		{
			this->inventory[i] = new Ice();
			this->inventory[i] = character.inventory[i];
		}
		else if (character.inventory[i]->getType() == "cure")
		{
			this->inventory[i] = new Cure();
			this->inventory[i] = character.inventory[i];
		}
	}
}

std::string const &Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			if (m->getType() == "ice")
				inventory[i] = m;
			else if (m->getType() == "cure")
				inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx] != NULL)
	{
		if (this->inventory[idx]->getType() == "ice")
			std::cout << "Shoot an Ice  at " << target.getName() << std::endl;
		else if (this->inventory[idx]->getType() == "cure")
			std::cout << "Heals " << target.getName() << "'s wound\n";
	}
}

Character::~Character()
{
	for (int i = 0 ; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
	std::cout << "Default destructor\n";
}
