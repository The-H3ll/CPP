//
// Created by Mouaad Labhairi on 11/5/21.
//

#ifndef C___MATERIASOURCE_HPP
#define C___MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	AMateria *materia[4];
public:
	MateriaSource();
	MateriaSource( const MateriaSource &materiaSource);
	~MateriaSource();

	void	learnMateria(AMateria *);
	AMateria*	createMateria( std::string const & type );
};


#endif //C___MATERIASOURCE_HPP
