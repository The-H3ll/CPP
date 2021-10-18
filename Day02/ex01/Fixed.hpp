/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:07 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/18 16:25:09 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
	private:
		int 				fixedPoint;
		int static const	fractionalBit = 8;
	public:
		Fixed();
		Fixed( int const value);
		Fixed( float const value);
		Fixed( const Fixed& fixed );
		~Fixed();
		void	operator = ( const	Fixed& fixed );
		//std::ostream&	operator << ( const Fixed& fixed );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float   toFloat( void ) const;
		int     toInt( void ) const;
};

std::ostream&    operator << ( std::ostream& out, const Fixed& fixed);

#endif
