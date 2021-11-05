
#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	//Orthodox canonical form
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrongAnimal);
		void 	operator= (const WrongAnimal &wrongAnimal);
		~WrongAnimal();
		// Func Member
		void	makeSound();

};

#endif