
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& gun): _name(name), _weapon(&gun)
{
}

HumanA::~HumanA()
{

}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType();
}