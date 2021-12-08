//
// Created by Mouaad Labhairi on 6/6/21.
//

#ifndef CPP_PHONE_BOOK_HPP
#define CPP_PHONE_BOOK_HPP

#include <iostream>

class Contact {
private:
	int	i;
	int contacts;
public:
	Contact();
	~Contact();
	Contact add_command(class Contact contact, int *j, int *contacts);
	void	search(class Contact contact);
	std::string first_name[8];
	std::string	last_name[8];
	std::string	nickname[8];
	std::string phone_number[8];
	std::string darkest_secret[8];
};

class Phone_book {

private:
	int i;
public:
		Contact array[8];
		Phone_book();
		~Phone_book();
		void	test( );
		bool	check_valid(std::string str);
	//	int		add_command(class contact contact, int count);
//		void	desired_index(class contact contact, int i);
		void	valid_index(class Contact contact, std::string index, int *contacts);
};


void	desired_index(class contact contact, int i);
bool	check_number(std::string index);

#endif //CPP_PHONE_BOOK_HPP
