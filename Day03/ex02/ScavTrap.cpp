

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap Constructor" << std::endl;
    this->_Name = "Default";
    this->_HitPoint		= 100;
    this->_EnergyPoint	= 50;
    this->_AttackDamage	= 20;
}

ScavTrap::ScavTrap( std::string Name ) : _Name(Name)
{
    this->_HitPoint		= 100;
    this->_EnergyPoint	= 50;
    this->_AttackDamage	= 20; 
}

ScavTrap::ScavTrap( const ScavTrap &scav )
{
	this->_Name = scav._Name;
	this->_HitPoint = scav._HitPoint;
	this->_AttackDamage = scav._AttackDamage;
	this->_EnergyPoint = scav._EnergyPoint;
	std::cout << "Copy ScavTrap constructor " << std::endl;
}

void    ScavTrap::operator =(  const ScavTrap& clap )
{
	this->_Name = clap._Name;
	this->_HitPoint = clap._HitPoint;
	this->_AttackDamage = clap._AttackDamage;
	this->_EnergyPoint = clap._EnergyPoint;
	std::cout << "Overload ScavTrap Operator" << std::endl;
}

void    ScavTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target << " causing " << this->_AttackDamage << " points of damage!"
		"Energy Point "<< this->_EnergyPoint << " from derived Scav"<<  std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}
