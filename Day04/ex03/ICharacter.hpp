//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {};
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //C___ICHARACTER_HPP
