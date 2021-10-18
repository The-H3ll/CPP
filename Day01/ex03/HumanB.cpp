
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void    HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType(); 
}

HumanB::~HumanB()
{}