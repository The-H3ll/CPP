//
// Created by Mouaad Labhairi on 11/3/21.
//

#ifndef C___ICE_HPP
#define C___ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
	std::string type;
public:
	Ice();
	Ice(const Ice &ice);
	~Ice();
	AMateria * clone() const;
	std::string	const &getType() const;
	void	operator=(const Ice &ice);
};


#endif //C___ICE_HPP
