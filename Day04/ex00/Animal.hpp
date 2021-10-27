

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
	//	Orthodox Canonical Form
		Animal();
		Animal( const Animal & animal );
		~Animal();
		void	operator=( const Animal & animal);
	//	Member Function
};

#endif