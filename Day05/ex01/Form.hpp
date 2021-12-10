//
// Created by Mouaad Labhairi on 11/7/21.
//

#ifndef C___FORM_HPP
#define C___FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form: public GradeTooLowException, public GradeTooHighException {
	private:
		const std::string   _name;
		int	 _grade;
		bool _signed;
	public:
		Form();
		Form(std::string name, int grade);
		Form( const Form &form);
		Form operator=(const Form &form);
		~Form() _NOEXCEPT;
		std::string getName() const ;
		int			getGrade() const ;
		int 		getSigned() const;
		bool		beSigned(Bureaucrat &bureaucrat);
		void 		signForm(Bureaucrat &bureaucrat);

};

std::ostream&	operator << (std::ostream& out , const Form &form);

#endif //C___FORM_HPP
