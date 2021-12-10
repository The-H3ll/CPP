//
// Created by Mouaad Labhairi on 12/5/21.
//


#include <iostream>
#include <string>

typedef	struct 	s_Data
{
	int value;
	char	c;
}			Data;

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	i;

	i = reinterpret_cast< uintptr_t > (ptr);
	return (i);
}

Data	*deserialize(uintptr_t raw)
{
	Data *data;

	data = reinterpret_cast < Data * > (raw);
	return (data);
}

int	main(void)
{
	Data *data = new Data;
	Data *go_back;
	uintptr_t ptr;


	data->value = 1;
	data->c = 'c';
	ptr = serialize(data);
	int	*i = reinterpret_cast < int * > (ptr);
	std::cout << "i ==> " << *i << std::endl;
	i++;
	char *s = reinterpret_cast < char *> (i);
	std::cout << "c ==> " << *s << std::endl;
	go_back = deserialize(ptr);
	std::cout << go_back->value << std::endl;
	std::cout << go_back->c << std::endl;
	return (0);

}
