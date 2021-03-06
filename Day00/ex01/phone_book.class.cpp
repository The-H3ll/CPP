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

Phone_book::Phone_book(void)
{}

Phone_book::~Phone_book(void )
{}

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

bool	Phone_book::check_valid(std::string str)
{
	if ((str.compare("ADD") != 0) && (str.compare("EXIT") != 0) && (str.compare("SEARCH") != 0))
		return (false);
	return (true);
}

Contact		Contact::add_command(class Contact contact, int *i, int *contacts)
{
	std::cout << "first name : ";
	std::getline (std::cin, contact.first_name[*i]);

	std::cout << "last name : ";
	std::getline (std::cin, contact.last_name[*i]);

	std::cout << "nickname : ";
	std::getline(std::cin, contact.nickname[*i]);

	std::cout << "phone_number : ";
	std::getline(std::cin, contact.phone_number[*i]);

	std::cout << "darkest_secret : ";
	std::getline(std::cin, contact.darkest_secret[*i]);
	if (*i < 8)
		*i += 1;
	if (*contacts < 8)
		*contacts += 1;
	return (contact);
}

void	Contact::search(class Contact contact, int cont)
{
	int j;

	j = 0;
	std::cout << "index" << std::setfill(' ') << std::setw(5) << "|" << " first name| last name | nickname  | " << std::endl;
	while (j < cont)
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

void	Contact::desired_index(class Contact contact, int i)
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

bool	Contact::check_number(std::string index)
{
	if (!std::isprint(index[0]))
		return (false);
	for (unsigned long i = 0; i < index.length(); i++)
	{
		if (std::isdigit(index[i]) == 0)
			return(false);
	}
	return (true);
}

void	Phone_book::valid_index(class Contact contact, std::string index, int *contacts)
{
	int num;

	num = -1;
	if (!contact.check_number(index))
	{
		std::cout << "Please Insert a valid index 0-7\n";
		return ;
	}
	num = std::stoi(index);
	if (num > *contacts && num != -1)
	{
		std::cout << "index is out of range\n";
		return ;
	}
	else if (num != -1)
	{
		contact.desired_index(contact, num);
		return ;
	}
}
