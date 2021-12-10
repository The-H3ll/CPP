/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molabhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:30:18 by molabhai          #+#    #+#             */
/*   Updated: 2021/10/18 12:30:20 by molabhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const  Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
	setRawBits(fixed.getRawBits());
}

void    Fixed::operator = (const Fixed& fixed)
{
	fixed.getRawBits();
    std::cout << "Assignation operator called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

