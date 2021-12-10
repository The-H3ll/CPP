//
// Created by Mouaad Labhairi on 11/11/21.
//

#ifndef C___ROBOTMYREQUESTFORM_HPP
#define C___ROBOTMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotmyRequestForm : public Form {
	private:
		std::string _target;
		int	const	_grade;
		int const	_exec;
	public:
		RobotmyRequestForm();
		RobotmyRequestForm( std::string name );
		RobotmyRequestForm( const RobotmyRequestForm &form);
		void	operator = (const RobotmyRequestForm &form);
		~RobotmyRequestForm() _NOEXCEPT;

		void	execute(Bureaucrat const &exec) const;
		bool	beSigned(Bureaucrat &bureaucrat);
		Form	*calling(std::string target);
};


#endif //C___ROBOTMYREQUESTFORM_HPP
