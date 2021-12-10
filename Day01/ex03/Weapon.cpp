
#include "Weapon.hpp"

Weapon::Weapon(const std::string name): _type(name)
{

}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void    Weapon::setType(const  std::string str)
{
    this->_type = str;
}

const std::string& Weapon::getType()
{
    return this->_type;
}
