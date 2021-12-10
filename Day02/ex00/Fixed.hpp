/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:30:26 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/18 12:30:28 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
	private:
		int 				fixedPoint;
		int static const	fractionalBit = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		void	operator = (const	Fixed& fixed);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
