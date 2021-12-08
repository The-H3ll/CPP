/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:16:53 by molabhai          #+#    #+#             */
/*   Updated: 2021/06/05 18:16:54 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phone_book.hpp"


int 	main(int ac, char **av)
{
	Phone_book pb;
	std::string index;
	Contact contact;
	std::string str;
	int *i;
	int *contacts;

	*i = 0;
	*contacts = 0;
	if (ac >= 2)
	{
		std::cout << "Usage: ./phone_book" << std::endl;
		av = NULL;
		return (0);
	}
	while (1)
	{
		std::getline (std::cin, str);
		if(!pb.check_valid(str))
			std::cout << "Wrong input" << std::endl;
		else if (str.compare("ADD") == 0)
		{
			if (*i == 8)
				*i = 0;
			contact = contact.add_command(contact, i, contacts);
		}
		else if (str.compare("SEARCH") == 0)
		{
			contact.search(contact);
			std::cout << "Which index do you want ? : ";
			std::getline (std::cin, index);
			pb.valid_index(contact, index, contacts);
		}
		else if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
