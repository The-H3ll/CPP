/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:30:51 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/13 11:30:56 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class   Karen
{
    private:
        void    debug( void );
        void	info( void );
        void	warning( void );
        void	error( void );
	public:
		void	complain( std::string level );
		Karen();
		~Karen();
};

#endif