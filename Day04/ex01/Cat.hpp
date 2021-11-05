

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain *brain;
	public:
	//	Orthodox Canonical Form
		Cat();
		Cat( const Cat & cat );
		Cat( std::string str[] );
		~Cat();
		void	operator=( const Cat & cat );
	//	Member Functions
		void	makeSound() const;
		std::string		*getBrain();

};

#endif