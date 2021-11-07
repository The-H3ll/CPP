//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef C___IMATERIASOURCE_HPP
#define C___IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};


#endif //C___IMATERIASOURCE_HPP
