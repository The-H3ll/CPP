/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:30:41 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/13 11:30:42 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Karen.hpp"

int	main()
{
	Karen karen;

	karen.complain("ERROR");
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	return (0);
}