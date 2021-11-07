//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef C___CURE_HPP
#define C___CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	protected:
		std::string type;
	public:
		Cure();
		Cure( const Cure &cure );
		void	operator=( const Cure &cure );
		AMateria *clone ( void ) const ;
		std::string	const &getType() const;
		~Cure();
};


#endif //C___CURE_HPP
