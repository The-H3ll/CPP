

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond default constrcutor\n";

    this->_Name = "Default Name";
    this->_HitPoint = FragTrap::_HitPoint;
    this->_EnergyPoint	= ScavTrap::_EnergyPoint;
    this->_AttackDamage	= FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(std::string Name) :  _Name(Name)
{
    ClapTrap::set(Name + "_clap_name");
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond default Destrcutor\n";
}


void    DiamondTrap::attack( std::string const & target )
{
    ScavTrap::attack(target);
}