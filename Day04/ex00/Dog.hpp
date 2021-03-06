
#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
	//	Orthodox Canonical Form
		Dog();
		Dog( const Dog & Dog );
		~Dog();
		void			operator=( const Dog & Dog );
	//	Member Functions
		virtual void			makeSound() const;
//		virtual std::string 	getType() const;
};

#endif