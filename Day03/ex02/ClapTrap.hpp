
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string _Name;
		int			_HitPoint;
		int			_EnergyPoint;
		int			_AttackDamage;

	public:
		ClapTrap();
		ClapTrap( const ClapTrap& clap );
		ClapTrap( std::string Name);
		void operator=( const ClapTrap& clap );
		~ClapTrap();
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string returnName(std::string Name);
};

#endif