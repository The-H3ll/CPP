
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string _type;

	public:
		const 	std::string& getType();
		void	setType(const std::string str);
		Weapon();
		Weapon( const std::string name );
		~Weapon();
		
};

#endif