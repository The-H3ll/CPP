

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap:  virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string _Name;
		int			_HitPoint;
		int			_EnergyPoint;
		int			_AttackDamage;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string Name);
        void    attack(std::string const & target);

};

#endif