/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:20:10 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/06 16:20:12 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*     zombieHorde( int N, std::string name)
{
    Zombie* zombie = new Zombie[N];
	int		i;

	i = 0;
    while (i < N)
	{
		zombie[i] = Zombie(name);
		i += 1;
	}
	return (zombie);
}