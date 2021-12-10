//
// Created by Mouaad Labhairi on 11/18/21.
//

#include <iostream>
#include <string>
#include <cmath>
#include "Check.hpp"


int		main(int ac , char **av)
{
	float f;
	int i;
	double d;
	char c;
	if (ac != 2)
	{
		std::cout << "Error \n" << std::endl;
		return (0);
	}
	f = std::stof(av[1]);

	i = static_cast < int > (f);
	d = static_cast < double > (f);
	c = static_cast < char > (f);

	if (isinf(f) || isnan(f))
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int   : impossible \n";
	}
	else
	{
		if (isprint(c))
			std::cout << "char   : " << c << std::endl;
		else
			std::cout << "char : Non displayable\n";
		std::cout << "int : " << i << std::endl;
	}
	std::cout << "float   : " << f << "f" << std::endl;
	std::cout << "double : " << d << std::endl;
	return (0);
}