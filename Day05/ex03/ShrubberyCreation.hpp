//
// Created by Mouaad Labhairi on 11/11/21.
//

#ifndef C___SHRUBBERYCREATION_HPP
#define C___SHRUBBERYCREATION_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreation: public Form {

private:
	std::string _target;
	int	const _grade;
public:
	static bool exec;
	ShrubberyCreation();
	ShrubberyCreation(std::string target);
	ShrubberyCreation( const ShrubberyCreation &shrubberyCreation);
	void execute(const Bureaucrat &executor) const;
	virtual bool beSigned(Bureaucrat &bureaucrat);
	~ShrubberyCreation() _NOEXCEPT;
	Form	*calling(std::string target);

};


#endif //C___SHRUBBERYCREATION_HPP
