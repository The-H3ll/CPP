//
// Created by Mouaad Labhairi on 11/11/21.
//

#include "RobotmyRequestForm.hpp"


RobotmyRequestForm::RobotmyRequestForm() : _grade(72), _exec(45){
	std::cout << "Robot Default destructor\n";
}

RobotmyRequestForm::RobotmyRequestForm(std::string name) : _grade(72), _exec(45){
	this->_target = name;
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm &form) : _grade(72), _exec(45){
	this->_target = form._target;
}

void	RobotmyRequestForm::operator=(const RobotmyRequestForm &form) {
	this->_target = form._target;
}

RobotmyRequestForm::~RobotmyRequestForm() throw() {
	std::cout << "Robot Destructor\n";
}

bool	RobotmyRequestForm::beSigned(Bureaucrat &bureaucrat) {
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


Form	*RobotmyRequestForm::calling(std::string target)
{
	return (new RobotmyRequestForm(target));
}

void	RobotmyRequestForm::execute(const Bureaucrat &exec) const{

	try
	{
		 if (this->getSigned())
		 {
		 	try
			{
		 		if (exec.getGrade() <= this->_exec)
				{
		 			srand(time(NULL));
					if (rand() % 10 == 0)
					{
						std::cout << "the " << this->_target << " has been robotomized successfully\n";
					}
					else
						std::cout  << "Its failure\n";
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

