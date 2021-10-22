/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:01 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/18 16:25:02 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}


Fixed::Fixed( const  Fixed& fixed )
{
    std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = fixed.getRawBits();
}

Fixed::Fixed( int const value )
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = roundf(value * (1 << this->fractionalBit));
}

Fixed::Fixed( float const value )
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(value * (1 << this->fractionalBit));
}

void    Fixed::operator = ( const Fixed& fixed )
{
    this->fixedPoint = fixed.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
}

std::ostream&    operator << ( std::ostream& out, const Fixed& fixed) 
{
    out << fixed.toFloat() << std::endl; 
    return (out);
}

int     Fixed::getRawBits( void ) const
{
    return (this->fixedPoint);
}

void    Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
    //std::cout << this->fixedPoint << std::endl;
}

float   Fixed::toFloat( void ) const
{
    return((float)this->fixedPoint / (float)(1 << this->fractionalBit));
}

int   Fixed::toInt( void ) const
{
    return(roundf(this->fixedPoint / (1 << this->fractionalBit)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}