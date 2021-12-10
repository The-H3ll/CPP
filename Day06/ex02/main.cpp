//
// Created by Mouaad Labhairi on 12/5/21.
//


#include "Base.hpp"
#include <iostream>
#include <string>
#include <time.h>

Base	*generate(void )
{
	srand(time(NULL));
	int v = rand() % 3 + 1;

	if (v == 1)
		return (new A);
	else if (v == 2)
		return (new B);
	return (new C);
}


void	identify(Base* p)
{
	A *a = new A;
	B *b = new B;
	C *c = new C;

	a = dynamic_cast <A*> (p);
	b = dynamic_cast <B*> (p);
	c = dynamic_cast <C*> (p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

std::ostream&    operator << ( std::ostream& out, const Base& fixed)
{
	(void ) fixed;
	return (out);
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast <A &> (p);
		std::cout << "A\n" << a;
		return;
	}
	catch (std::bad_cast &bc)
	{
	//	std::cout  << bc.what() << std::endl;
	}
	try
	{
		B &b = dynamic_cast <B &> (p);
		std::cout << "B" << std::endl << b;
		return;

	}
	catch (std::bad_cast &bc)
	{
		//std::cout << bc.what() << std::endl;
	}
	try
	{
		C &c = dynamic_cast <C &> (p);
		std::cout << "A" << std::endl << c;
		return;
	}
	catch (std::bad_cast &bc)
	{
		//std::cout << bc.what() << std::endl;
	}
}

int	main(void)
{
	Base *base = generate();
	Base &base1 = *generate();
	identify(base);
	identify(base1);
}
