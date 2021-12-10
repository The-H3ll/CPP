//
// Created by Mouaad Labhairi on 11/11/21.
//


#include "ShrubberyCreation.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"


int		main(void)
{
	ShrubberyCreation shrub("CasaNegra");
	Bureaucrat bureaucrat("Labhairi", 147);
	Bureaucrat bu("Mouaad", 40);
	Bureaucrat theBureaucrat("The- ", 1);
	RobotmyRequestForm robot("CasaAnfa");
	PresidentialPardonForm president("World");


	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	rrf->beSigned(bu);
	rrf->execute(bu);
	//Shrub
//	shrub.beSigned(bureaucrat);
//	shrub.execute(bu);
//
//	//Robot
//	robot.beSigned(bu);
//	robot.execute(bu);
//
	//President
	//Testing with low
//	president.beSigned(bu);
//	president.execute(bu);
//	//Testing with high
//	president.beSigned(theBureaucrat);
//	president.execute(theBureaucrat);
}