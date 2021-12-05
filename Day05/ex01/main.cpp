//
// Created by Mouaad Labhairi on 11/6/21.
//

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat bureaucrat("labhairi", 150);

	// Grade and Name
	std::cout << bureaucrat << std::endl;
	//Decrement Grade
	bureaucrat.decrementGrade();
	std::cout << bureaucrat << std::endl;

	//Increment Grade
	bureaucrat.incrementGrade();
	std::cout << bureaucrat << std::endl;


	return (0);
}