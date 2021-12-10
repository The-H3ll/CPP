//
// Created by Mouaad Labhairi on 11/13/21.
//

#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Intern Default Constructor\n";
}

Intern::Intern( Intern const &intern) {
	*this = intern;

}

void 	Intern::operator=(const Intern &intern) {
	*this = intern;
}

Form	*Intern::makeForm(std::string form, std::string target) {

	std::string forms [] = {"shurubbery creation", "robotmy request", "presidential pardon form"};
	typedef Form* (Intern::*PtrFunc)(std::string target);
	PtrFunc lvl[4] = {&ShrubberyCreation::calling, &RobotmyRequestForm::calling, &PresidentialPardonForm::calling };
	for (int i = 0 ; i <  3 ; i++)
	{
		if (forms[i] == form)
		{
			std::cout << "Internes creates " << forms[i];
			return ((this->*lvl[i])(target));
		}
	}

	std::cout << "Wrong form\n";
	return NULL;
}


Intern::~Intern() throw()
{
	std::cout << "Default Destructor\n";

}
