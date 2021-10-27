

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : Animal
{
	public:
	//	Orthodox Canonical Form
		Cat();
		Cat( const Cat & cat );
		~Cat();
		void	operator=( const Cat & cat );
	//	Member Functions
		void	makeSound();

};

#endif