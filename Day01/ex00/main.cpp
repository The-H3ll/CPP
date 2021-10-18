/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:30:11 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/06 15:31:00 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int     main(void)
{
    Zombie zombie("labhairi");
    Zombie *next = newZombie("Mouaad");

  //  next = 
    zombie.announce();
    next->announce();
    delete next;
    return (0);
}