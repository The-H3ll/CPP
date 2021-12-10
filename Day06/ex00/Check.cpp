//
// Created by Mouaad Labhairi on 12/5/21.
//

#include "Check.hpp"


Check::Check()
{
	std::cout << "Check Default constructor\n";
	value = 1;
}

Check::Check(const Check &check) {
	this->value = check.value;
}

void	Check::operator=(const Check &check) {
	this->value = check.value;
}

bool	Check::check_double(std::string str) {
	try
	{
		std::stod(str);
	}
	catch (...)
	{
		return false;
	}
	return true;
}

bool	Check::check_int(std::string str) {
	try
	{
		std::stoi(str);
	}
	catch (...)
	{
		return false;
	}
	return true;
}

bool	Check::check_float(std::string str) {
	try
	{
		std::stof(str);
	}
	catch (...)
	{
		return false;
	}
	return true;
}

Check::~Check() {
	std::cout << "Default Destructor\n" << std::endl;
}
