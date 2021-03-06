//
// Created by Mouaad Labhairi on 12/5/21.
//

#ifndef C___CHECK_HPP
#define C___CHECK_HPP

#include <string>
#include <exception>
#include <iostream>

class Check {
	protected:
		int value;
	public:
		Check();
		Check(const Check &check);
		void	operator= (const Check &check);
		~Check();
		bool	check_double(std::string str);
		bool	check_int(std::string str);
		bool	check_float(std::string str);
};

#endif //C___CHECK_HPP
