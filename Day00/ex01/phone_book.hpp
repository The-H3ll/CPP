//
// Created by Mouaad Labhairi on 6/6/21.
//

#ifndef CPP_PHONE_BOOK_HPP
#define CPP_PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string first_name[8];
	std::string	last_name[8];
	std::string	nickname[8];
	std::string phone_number[8];
	std::string darkest_secret[8];
public:
	Contact();
	~Contact();
	Contact add_command(class Contact contact, int *j, int *contacts);
	void	search(class Contact contact, int cont);
	void desired_index(Contact contact, int i);
	bool	check_number(std::string index);
};

class Phone_book {
private:
	Contact array[8];
public:
		Phone_book();
		~Phone_book();
		bool	check_valid(std::string str);
		void	valid_index(class Contact contact, std::string index, int *contacts);
};



#endif //CPP_PHONE_BOOK_HPP
