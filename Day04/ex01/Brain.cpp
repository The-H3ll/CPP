//
// Created by Mouaad Labhairi on 10/30/21.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor\n";
	this->ideas[0] = "Idea 1";
}

Brain::Brain(const Brain &brain)

{
	for (int i = 0 ; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
}

void	Brain::operator=( const Brain &brain)
{
	for (int i = 0 ; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain Destructor\n";
}

