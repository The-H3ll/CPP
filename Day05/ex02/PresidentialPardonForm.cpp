//
// Created by Mouaad Labhairi on 11/11/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _grade(25), _exec(5){
	std::cout << "Default  President Constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string name): _grade(25), _exec(5) {
	this->_target = name;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &presidentialPardonForm): _grade(25), _exec(5) {
	this->_target = presidentialPardonForm._target;
}

bool	PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat) {
	try {
		if (bureaucrat.getGrade() <= this->_grade)
		{
			this->setSigned(true);
			return (true);
		}
		else
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (false);
}

Form	*PresidentialPardonForm::calling(std::string target)
{
	return (new PresidentialPardonForm(target));
}

void	PresidentialPardonForm::execute(const Bureaucrat &exec) const{
	try
	{
		if (this->getSigned())
		{
			try
			{
				if (exec.getGrade() <= this->_exec)
				{
					std::cout << "the " << this->_target << " has been pardoned by Zafod Beeblebrox\n";
				}
				else
					throw Form::GradeTooLowException();
			}
			catch (std::exception &e)
			{
				std::cout << exec.getName() << " Cannot Execute " << e.what() << std::endl;
			}
		}
		else
			throw Form::NeedToBeSigned();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

PresidentialPardonForm::~PresidentialPardonForm() throw()
{
	std::cout << "President Destructor\n";
}