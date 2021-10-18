/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:30:52 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/06 15:30:56 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*     newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);

    //zombie->_zombie_name;
    return (zombie);
}