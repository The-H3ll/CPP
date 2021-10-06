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


int 	main()
{
	phone_book pb;
	std::string index;
	contact contact;
	std::string str;

	contact.i = 0;
	contact.contacts = 0;
	while (1)
	{
		std::getline (std::cin, str);
		if(pb.check_valid(str) == false)
			std::cout << "Wrong input" << std::endl;
		else if (str.compare("ADD") == 0)
		{
			if (contact.i == 8)
				contact.i = 0;
			contact = contact.add_command(contact);
		}
		else if (str.compare("SEARCH") == 0)
		{
			pb.search(contact);	
			std::cout << "Wich index do you want ? : ";
			std::getline (std::cin, index);
			pb.valid_index(contact, index);
		}
		else if (str.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
