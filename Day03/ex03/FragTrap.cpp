

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap Constructor" << std::endl;
    this->_Name = "Default";
    this->_HitPoint		= 100;
    this->_EnergyPoint	= 100;
    this->_AttackDamage	= 30;
}

FragTrap::FragTrap( std::string Name ) : _Name(Name)
{
    this->_HitPoint		= 100;
    this->_EnergyPoint	= 100;
    this->_AttackDamage	= 30; 
}

FragTrap::FragTrap( const FragTrap &scav )
{
	this->_Name = scav._Name;
	this->_HitPoint = scav._HitPoint;
	this->_AttackDamage = scav._AttackDamage;
	this->_EnergyPoint = scav._EnergyPoint;
	std::cout << "Copy FragTrap constructor " << std::endl;
}

void    FragTrap::operator =(  const FragTrap& clap )
{
	this->_Name = clap._Name;
	this->_HitPoint = clap._HitPoint;
	this->_AttackDamage = clap._AttackDamage;
	this->_EnergyPoint = clap._EnergyPoint;
	std::cout << "Overload FragTrap Operator" << std::endl;
}

void    FragTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_Name << " attack " << target << " causing " << this->_AttackDamage << " points of damage!"
		"Energy Point "<< this->_EnergyPoint << " from derived Frag"<<  std::endl;
}


void    FragTrap::highFivesGuys( void )
{
    std::cout << "high fives request " << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}