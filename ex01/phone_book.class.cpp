/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:03:10 by molabhai          #+#    #+#             */
/*   Updated: 2021/06/06 17:03:11 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phone_book.hpp"

phone_book::phone_book(void)
{}

phone_book::~phone_book(void )
{}

contact::contact(void)
{}

contact::~contact(void)
{}

bool	phone_book::check_valid(std::string str)
{
	if ((str.compare("ADD") != 0) && (str.compare("EXIT") != 0) && (str.compare("SEARCH") != 0))
		return (false);
	return (true);
}

contact		contact::add_command(class contact contact)
{
	std::cout << "first name : ";
	std::cin >> contact.first_name[contact.i]; 

	std::cout << "last name : ";
	std::cin >> contact.last_name[contact.i];

	std::cout << "nickname : ";
	std::cin >> contact.nickname[contact.i];

	std::cout << "phone_number : ";
	std::cin >> contact.phone_number[contact.i];

	std::cout << "darkest_secret : ";
	std::cin >> contact.darkest_secret[contact.i];
	contact.i += 1;
	return (contact);
}

void	phone_book::search(class contact contact)
{
	int j;

	j = 0;
	std::cout << "index    | first name| last name | nickname  | " << std::endl;
	while (j < contact.i)
	{
		std::cout << j << "        | ";
		if (contact.first_name[j].length() > 10)
		{
			contact.first_name[j].resize(8);
			contact.first_name[j].resize(9, '.');
			std::cout << contact.first_name[j] << " | ";
		}
		else
		{
			contact.first_name[j].append(10 - contact.first_name[j].length(), ' ');
			std::cout << contact.first_name[j] << "| "; 
		}
		if (contact.last_name[j].length() > 10)
		{
			contact.last_name[j].resize(8);
			contact.last_name[j].resize(9, '.');
			std::cout << contact.last_name[j] << " | ";
		}
		else
		{
			contact.last_name[j].append(10 - contact.last_name[j].length(), ' ');
			std::cout << contact.last_name[j] << "| ";
		}
		if (contact.nickname[j].length() > 10)
		{
			contact.nickname[j].resize(8);
			contact.nickname[j].resize(9, '.');
			std::cout << contact.nickname[j] << " | ";
		}
		else
		{
			contact.nickname[j].append(10 - contact.nickname[j].length(), ' ');
			std::cout << contact.nickname[j] << "| ";
		}
		std::cout << std::endl;
		j += 1;
	}
}

void	phone_book::desired_index(class contact contact, int i)
{
	std::cout << "first name : ";
	std::cout << contact.first_name[i] << std::endl; 

	std::cout << "last name : ";
	std::cout << contact.last_name[i] << std::endl;

	std::cout << "nickname : ";
	std::cout << contact.nickname[i] << std::endl;

	std::cout << "phone_number : ";
	std::cout << contact.phone_number[i] << std::endl;

	std::cout << "darkest_secret : ";
	std::cout << contact.darkest_secret[i] << std::endl;
}

void	phone_book::valid_index(class contact contact, string index)
{
	int num;

	num = std::stoi(index);
	if (index.compare("0") != 0 && index.compare("1") != 0 index.compare("2") != 0 && index.compare("3") != 0
		&& index.compare("4") != 0 && index.compare("5") != 0 && index.compare("6") != 0 && )index.compare("7") != 0 && 
		std::cout << "Please Insert a valid index 0-7\n";
	
	if (num > contact.i)
	{
		std::cout << "index is out of range\n";
		return ;
	}
	
}