

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		std::string _Name;
		int			_HitPoint;
		int			_EnergyPoint;
		int			_AttackDamage;
    public:
		FragTrap();
		FragTrap( std::string Name );
		void	operator=( const FragTrap &clap );
		FragTrap( const FragTrap &scav );
		~FragTrap();

		void	attack( std::string const & target );
		void	highFivesGuys( void );

};

#endif
