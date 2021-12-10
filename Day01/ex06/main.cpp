/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:59:46 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/13 13:59:47 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
    std::string levels[] = {"DEBUG", "INFO","WARNING", "ERROR"};
    int level = -1;
    Karen karen;

    if (ac != 2)
    {
        std::cout << "Usage: ./karen \"Arg\"" << std::endl;
		return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        if (av[1] == levels[i])
            level = i + 1;
    }
    switch (level)
    {
        case 1:
	        karen.complain("DEBUG");
        case 2:
	        karen.complain("INFO");
        case 3:
	        karen.complain("WARNING");
        case 4:
	        karen.complain("ERROR");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
 
    }	return (0);
}
