//
// Created by Mouaad Labhairi on 11/7/21.
//

#ifndef C___FORM_HPP
#define C___FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"



class	NeedToBeSigned : public std::exception
{
public:
	virtual  const char *what() const throw()
	{
		return ("Error The form need to be signed");
	}
	//~GradeTooHighException()  _NOEXCEPT;
};


class Form: public GradeTooLowException, public GradeTooHighException, public NeedToBeSigned{
	private:
		const std::string   _name;
		const int _grade;
		bool _signed;
	public:
		Form();
		Form(std::string name, int grade);
		Form( const Form &form);
		void operator=(const Form &form);
		~Form() _NOEXCEPT;
		std::string getName() const ;
		int			getGrade() const ;
		bool 		getSigned() const;
		virtual bool		beSigned(Bureaucrat &bureaucrat);
		void 		signForm(Bureaucrat &bureaucrat);
		virtual void 		execute(Bureaucrat const & executor) const = 0;
		void 		setSigned(bool sign);

};

std::ostream&	operator << (std::ostream& out , const Form &form);

#endif //C___FORM_HPP
