
#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog:Animal
{
	public:
	//	Orthodox Canonical Form
		Dog();
		Dog( const Dog & Dog );
		~Dog();
		void	operator=( const Dog & Dog );
	//	Member Functions
		void	makeSound();
};

#endif