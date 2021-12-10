//
// Created by Mouaad Labhairi on 11/7/21.
//

#include "Form.hpp"


Form::Form()  {
	std::cout << "Default constructor\n";
	this->_signed = false;
}

Form::Form(std::string name, int grade): _name(name), _grade(grade) {
	this->_signed = false;
}

Form::Form(const Form &form) {
	this->_signed = form._signed;
}

Form	Form::operator=(const Form &form){
	 this->_signed = form._signed;
	return (*(this));
}

int		Form::getGrade() const {
	return (this->_grade);
}
int		Form::getSigned() const {
	return (this->_signed);
}

std::string	Form::getName() const{
	return (this->_name);
}

bool	Form::beSigned(Bureaucrat &bureaucrat)
{
	try {
		if (bureaucrat.getGrade() <= this->_grade)
		{
			this->_signed = true;
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

void	Form::signForm(Bureaucrat &bureaucrat)
{
	try
	{
		if (beSigned(bureaucrat))
			std::cout << bureaucrat.getName() << " signs " << this->_name << std::endl;
		else
			throw Form::GradeTooLowException();

	}
	catch (std::exception &e)
	{
		std::cout << bureaucrat.getName() << " cannot sign " << this->_name << " " <<  e.what() << std::endl;
	}
}

std::ostream& operator << (std::ostream& out, const Form& form)
{
	if (form.getSigned() == true)
		out << form.getName() << " is signed\n";
	else if (form.getSigned() == false)
		out << form.getName() << " is not signed\n";
	return out;
}

Form::~Form() throw()
{
	std::cout << "Default Destructor\n";
}
