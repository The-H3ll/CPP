//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class	AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria &materia);
	AMateria(std::string const & type);
	void	operator=(const AMateria &materia);
	virtual ~AMateria();

	std::string	const & getType() const ;
	virtual AMateria* clone() const = 0;
	virtual  void use(ICharacter & target);
};

#endif //C___AMATERIA_HPP
