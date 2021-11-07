//
// Created by Mouaad Labhairi on 11/6/21.
//

#ifndef C___BUREAUCRAT_HPP
#define C___BUREAUCRAT_HPP

#include <iostream>
#include <exception>


class	GradeTooHighException : public std::exception
{
public:
	virtual  const char *what() const noexcept
	{
		return ("Error Grade Too High");
	}
};


class	GradeTooLowException : public std::exception
{
public:
	 virtual const char *what() const noexcept
	{
		return ("Error Grade Too Low");
	}
};

class Bureaucrat : public GradeTooHighException, public GradeTooLowException
{
	private:
		std::string  _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade);
		Bureaucrat( const Bureaucrat& bureaucrat );
		void	operator=( const Bureaucrat& bureaucrat );
		~Bureaucrat();
		void	incrementGrade();
		void 	decrementGrade();
		std::string  getName() const;
		int		getGrade() const;
};

std::ostream&	operator << (std::ostream& out , const Bureaucrat& bureaucrat);

#endif //C___BUREAUCRAT_HPP
