//
// Created by Mouaad Labhairi on 11/11/21.
//

#include "ShrubberyCreation.hpp"


ShrubberyCreation::ShrubberyCreation() : _grade(147){
	std::cout << "Default constructor\n";
}

ShrubberyCreation::ShrubberyCreation(std::string target) : _target(target),_grade(147) {

}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &shrubberyCreation) : _grade (shrubberyCreation._grade){
	this->_target = shrubberyCreation._target;
}

bool 	ShrubberyCreation::beSigned(Bureaucrat &bureaucrat) {
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


Form	*ShrubberyCreation::calling(std::string target)
{
	return (new ShrubberyCreation(target));
}

void	ShrubberyCreation::execute(const Bureaucrat &executor) const {
	try
	{
		if (this->getSigned())
		{
			try {
				if (executor.getGrade() <= 137)
				{
					std::cout << executor.getName() << " execute " << this->_target << "_shrubbery\n";
					std::ofstream File(this->_target + "_shrubbery");
					File  << "                 *" << std::endl;
					File  <<"                /|\\" <<std::endl;
					File  <<"	       /*|O\\" <<std::endl;
					File  <<"	      /*/|\\*\\" <<std::endl;
					File  <<"	     /X/O|*\\X\\" <<std::endl;
					File  <<"	    /*/X/|\\X\\*\\" <<std::endl;
					File  <<"	   /O/*/X|*\\O\\X\\" <<std::endl;
					File  <<"	  /*/O/X/|\\X\\O\\*\\" <<std::endl;
					File  <<"	 /X/O/*/X|O\\X\\*\\O\\" <<std::endl;
					File  <<"	/O/X/*/O/|\\X\\*\\O\\X\\" <<std::endl;
					File  <<"	        |X|" <<std::endl;
					File  <<"	        |X|"<<std::endl;;
				}
				else
					throw Form::GradeTooLowException();
			}
			catch (std::exception &e)
			{
				std::cout << executor.getName() << " cannot execute  " << e.what() << std::endl;
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

ShrubberyCreation::~ShrubberyCreation() throw()
{
	std::cout << "Default Destructor\n";
}
