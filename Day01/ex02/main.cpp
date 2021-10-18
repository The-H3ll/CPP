

#include <iostream>

int main()
{
	std::string		casa = "casanegra";
    std::string		*stringPTR = &casa;
	std::string		&stringREF = casa;
	

	std:: cout << "String STR memory ==> " << &casa << std::endl;
	std:: cout << "String PTR memory ==> " << &stringPTR << std::endl;
	std:: cout << "String REF memory ==> " << &stringREF << std::endl;
	
	std:: cout << "String PTR display ==> " << *stringPTR << std::endl;
	std:: cout << "String REF display ==> " << stringREF << std::endl;
}