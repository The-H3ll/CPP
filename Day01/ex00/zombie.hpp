/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:30:17 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/04 18:30:19 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
    private:
        std::string _zombie_name;
    public:
        Zombie( std::string name );
        ~Zombie();
        void    announce( void );

};

Zombie*     newZombie( std::string name );
void    randomChump( std::string name);
