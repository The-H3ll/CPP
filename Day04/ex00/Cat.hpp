

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
	//	Orthodox Canonical Form
		Cat();
		Cat( const Cat & cat );
		~Cat();
		void	operator=( const Cat & cat );
	//	Member Functions
		void	makeSound() const;
//		std::string getType() const;

};

#endif