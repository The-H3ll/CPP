
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "Default";
    this->_HitPoint		= 10;
    this->_EnergyPoint	= 10;
    this->_AttackDamage	= 0;

	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &clap)
{
	this->_Name = clap._Name;
	this->_HitPoint = clap._HitPoint;
	this->_AttackDamage = clap._AttackDamage;
	this->_EnergyPoint = clap._EnergyPoint;
	std::cout << "Copy constructor " << std::endl;
}

void    ClapTrap::operator =(  const ClapTrap& clap )
{
	this->_Name = clap._Name;
	this->_HitPoint = clap._HitPoint;
	this->_AttackDamage = clap._AttackDamage;
	this->_EnergyPoint = clap._EnergyPoint;
	std::cout << "Overload Operator" << std::endl;
}

ClapTrap::ClapTrap( std::string Name) : _Name(Name)
{
    this->_HitPoint		= 10;
    this->_EnergyPoint	= 10;
    this->_AttackDamage	= 0;
} 


void	ClapTrap::attack( std::string const &target)
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target << " causing " << this->_AttackDamage << " points of damage!"
		"Energy Point "<< this->_EnergyPoint <<  std::endl;
}
void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_AttackDamage = amount;
	this->_EnergyPoint = this->_EnergyPoint - this->_AttackDamage;
	if (this->_EnergyPoint < 0)
		this->_EnergyPoint = 0;
	std::cout << "ClapTrap " << this->_Name << " attack, "  << " causing " << this->_AttackDamage << "points of damage!"
		"Energy Point "<< this->_EnergyPoint <<  std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_EnergyPoint += amount;
	std::cout << "ClapTrap " << this->_Name << " attack, " << " causing " << this->_AttackDamage << "points of damage!"
		"Energy Point "<< this->_EnergyPoint <<  std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}