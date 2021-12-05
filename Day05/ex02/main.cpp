//
// Created by Mouaad Labhairi on 11/6/21.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat bureaucrat("labhairi", 150);
	Bureaucrat	bureaucrat1("Mouaad", 1);
	Form	form("Form", 10);

	std::cout << "Form " << form.getSigned() << std::endl;
	if (form.getSigned() == false)
	{
		form.signForm(bureaucrat);
		form.signForm(bureaucrat);
	}
	std::cout << form << std::endl;
	return (0);
}