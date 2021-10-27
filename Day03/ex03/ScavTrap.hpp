

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		std::string _Name;
		int			_HitPoint;
		int			_EnergyPoint;
		int			_AttackDamage;
    public:
		ScavTrap();
		ScavTrap( std::string Name );
		void	operator=( const ScavTrap &clap );
		ScavTrap( const ScavTrap &scav );
		~ScavTrap();

		void	guardGate( void ); 
		void	attack( std::string const & target );
};

#endif