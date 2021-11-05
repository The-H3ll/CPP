//
// Created by Mouaad Labhairi on 10/30/21.
//

#ifndef C___BRAIN_HPP
#define C___BRAIN_HPP

#include <iostream>

class	Brain
{
public:
	// Orthodox canonical form
	std::string	ideas[100];
	Brain();
	Brain(const Brain & brain);
	void	operator=( const Brain &brain);
	~Brain();

};

#endif //C___BRAIN_HPP
