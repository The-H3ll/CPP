//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef C___CHARACTER_HPP
#define C___CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria *inventory[4];
	public:

		Character();
		Character(std::string name);
		Character(const Character  &character);
		void	operator=(const Character &character);
		~Character();
		std::string const & getName() const ;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target) ;
};


#endif //C___CHARACTER_HPP
