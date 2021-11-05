
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int     main(void)
{
	const 	Animal **animal = new const Animal* [10];
	std::string str[5] = {"hello", "casa", "negra", "1337", "42"};
	Cat cat(str);
	Cat check(cat);
	Dog dog(str);

	std::string *d = dog.getBrain() ;
	std::string *ca = cat.getBrain() ;
	for (unsigned long  i = 0; i < ca->length(); i++)
	{
		std::cout << "Cat-> " << ca[i] << std::endl;
	}

	for (unsigned long  i = 0; i < d->length(); i++)
	{
		std::cout << "Dog-> " << d[i] << std::endl;
	}


	for (int k = 0; k < 10 ; k++ )
	{
		if (k % 2)
			animal[k] = new Dog();
		else
			animal[k] = new Cat();
	}

	for (int k = 0; k < 10 ; k++ )
	{
			animal[k]->makeSound();
	}

	delete [] animal;
	return 0;
}