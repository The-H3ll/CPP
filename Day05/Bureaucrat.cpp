//
// Created by Mouaad Labhairi on 11/6/21.
//

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {
	std::cout << "Bureacrat Default constructor\n";
	this->_name = "Bureaucrat";
	this->_grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {}


void	Bureaucrat::incrementGrade() {
	try {
		if (this->_grade > 1)
			this->_grade -= 1;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator <<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrate grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

void	Bureaucrat::decrementGrade() {
	try {
		if (this->_grade < 150)
			this->_grade += 1;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default destructor\n";
}