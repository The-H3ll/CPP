//
// Created by Mouaad Labhairi on 11/13/21.
//

#ifndef C___INTERN_HPP
#define C___INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreation.hpp"
#include "RobotmyRequestForm.hpp"
#include "Form.hpp"


class Intern: public PresidentialPardonForm, public ShrubberyCreation, public RobotmyRequestForm{
private:
	int o;
	public:
		Intern();
		Intern( const Intern &intern);
		void	operator =(const Intern &intern);
		~Intern() throw();
		Form	*makeForm(std::string form, std::string target);
		PresidentialPardonForm president;

};


#endif //C___INTERN_HPP
