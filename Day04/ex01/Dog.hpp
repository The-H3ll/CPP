
#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
private:
	Brain *brain;
	public:
	//	Orthodox Canonical Form
		Dog();
		Dog( const Dog & Dog );
		Dog(std::string str[]);
		~Dog();
		Dog			operator=( const Dog & Dog );
	//	Member Functions
		virtual void			makeSound() const;
		std::string	*getBrain();
//		virtual std::string 	getType() const;
};

#endif