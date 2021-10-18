/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:20:15 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/06 16:21:10 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
    Zombie  *casa;
    int num;

    num = 20;
    casa = zombieHorde(num, "Mouaad");
    for (int i = 0; i < num; i++)
    {
        casa->announce();
    }
    delete [] casa;
}