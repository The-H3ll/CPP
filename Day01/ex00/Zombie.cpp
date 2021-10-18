/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:02:58 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/06 16:03:08 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _zombie_name(name)
{
	
}
void		Zombie::announce( void )
{
    std::cout << "<" << this->_zombie_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{

}
