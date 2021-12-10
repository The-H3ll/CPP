//
// Created by Mouaad Labhairi on 11/11/21.
//

#ifndef C___PRESIDENTIALPARDONFORM_HPP
#define C___PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
	private:
		int const	_grade;
		int const _exec;
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm( PresidentialPardonForm const &president);
		~PresidentialPardonForm() _NOEXCEPT;

		bool	beSigned(Bureaucrat &bureaucrat);
		void	execute(const Bureaucrat &bureaucrat) const;
		Form	*calling(std::string target);


};


#endif //C___PRESIDENTIALPARDONFORM_HPP
