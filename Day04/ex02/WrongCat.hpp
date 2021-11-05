//
// Created by Mouaad Labhairi on 10/30/21.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	//	Orthodox Canonical Form
	WrongCat();
	WrongCat( const WrongCat & cat );
	~WrongCat();
	void	operator=( const WrongCat & cat );
	//	Member Functions
	void	makeSound() const;
	std::string getType() const;

};

#endif //C___WRONGCAT_HPP
