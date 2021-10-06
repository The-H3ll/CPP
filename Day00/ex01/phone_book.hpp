//
// Created by Mouaad Labhairi on 6/6/21.
//

#ifndef CPP_PHONE_BOOK_HPP
#define CPP_PHONE_BOOK_HPP

#include <iostream>

class phone_book {

	public:
		int i;
		phone_book();
		~phone_book();
		void	test( );
		bool	check_valid(std::string str);
	//	int		add_command(class contact contact, int count);
		void	search(class contact contact);
//		void	desired_index(class contact contact, int i);
		void	valid_index(class contact contact, std::string index);
};

class contact {
	public:
		contact();
		~contact();
		int	i;
		int contacts;
		contact add_command(class contact contact); 
		std::string first_name[8];
		std::string	last_name[8];
		std::string	nickname[8];
		std::string phone_number[8];
		std::string darkest_secret[8];
};

void	desired_index(class contact contact, int i);
bool	check_number(std::string index);

#endif //CPP_PHONE_BOOK_HPP
