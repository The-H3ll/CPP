
#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
}


Fixed::Fixed( const  Fixed& fixed )
{
	this->fixedPoint = fixed.getRawBits();
}

Fixed::Fixed( int const value )
{
   // this->fixedPoint = roundf(value * (1 << this->fractionalBit));
   this->fixedPoint = value;
}

Fixed::Fixed( float const value )
{
    this->fixedPoint = roundf(value * (1 << this->fractionalBit));
	std::cout << "value ==> " << value << " fixed Point ==> " << this->fixedPoint << std::endl;
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

void    Fixed::operator = ( const Fixed& fixed )
{
    this->fixedPoint = fixed.getRawBits();
}

std::ostream&    operator << ( std::ostream& out, const Fixed& fixed) 
{
    out << fixed.toFloat(); 
    return (out);
}

// Comparison Operators
void    Fixed::operator > (const Fixed& fixedA)
{
	if (fixedA.fixedPoint > this->fixedPoint)
		std::cout << "this " << fixedA.fixedPoint << " bigger" << std::endl;
	else if (this->fixedPoint > fixedA.fixedPoint)
		std::cout << "this " << this->fixedPoint << " bigger" << std::endl;
}

void    Fixed::operator < ( const Fixed& fixedA )
{
	if (fixedA.fixedPoint < this->fixedPoint)
		std::cout << "this " << fixedA.fixedPoint << " smaller" << std::endl;
	else if (this->fixedPoint < fixedA.fixedPoint)
		std::cout << "this " << this->fixedPoint << " smaller" << std::endl;
}

void    Fixed::operator >= ( const Fixed& fixedA )
{
	if (fixedA.fixedPoint >= this->fixedPoint)
		std::cout << "this " << fixedA.fixedPoint << " bigger" << std::endl;
	else if (this->fixedPoint >= fixedA.fixedPoint)
		std::cout << "this " << this->fixedPoint << " bigger" << std::endl;
}

void    Fixed::operator <= ( const Fixed& fixedA )
{
	if (fixedA.fixedPoint <= this->fixedPoint)
		std::cout << "this " << fixedA.fixedPoint << " smaller" << std::endl;
	else if (this->fixedPoint <= fixedA.fixedPoint)
		std::cout << "this " << this->fixedPoint << " smaller" << std::endl;
}

void    Fixed::operator == ( const Fixed& fixedA )
{
	if (fixedA.fixedPoint == this->fixedPoint)
		std::cout << "Are equals" << std::endl;
	else
		std::cout << "Are not equals" << std::endl;
}

void    Fixed::operator != ( const Fixed& fixedA )
{
	if (fixedA.fixedPoint == this->fixedPoint)
		std::cout << "Are not different" << std::endl;
	else
		std::cout << "Are Different!!" << std::endl;
}

// Arithmetic Operators

Fixed    Fixed::operator + ( const Fixed& fixed )
{
	this->fixedPoint = fixed.fixedPoint + this->fixedPoint;
	return (fixed);
}

Fixed    Fixed::operator - ( const Fixed& fixed )
{
	this->fixedPoint = fixed.fixedPoint - this->fixedPoint;
	return (fixed);
}

Fixed    Fixed::operator * ( const Fixed& fixed )
{
	Fixed fix;
	fix.fixedPoint = fixed.fixedPoint * this->fixedPoint;
	return (fix);
}

Fixed    Fixed::operator / ( const Fixed& fixed)
{
	this->fixedPoint = fixed.fixedPoint / this->fixedPoint;
	return (fixed);
}

// Increment / Decrement Operators

//	PreIncrement
Fixed    Fixed::operator ++ ( )
{
	Fixed fixed;
	fixed.fixedPoint = ++this->fixedPoint;
	return (fixed); 
}

//	PostIncrement
Fixed    Fixed::operator ++ ( int )
{
	Fixed fixed;
	fixed.fixedPoint = this->fixedPoint++;
	return (fixed); 
}

//	PreDecrement
Fixed	Fixed::operator -- ( )
{
	Fixed fixed;
	fixed.fixedPoint = --this->fixedPoint;
	return (fixed); 
}

// PostDecrement
Fixed	Fixed::operator -- ( int )
{
	Fixed fixed;
	fixed.fixedPoint = this->fixedPoint - 1;
	return (fixed); 
}


// MIN / MAX Static member


Fixed		Fixed::max(Fixed& fixedA, Fixed& fixedB)
{
	if (fixedA.fixedPoint > fixedB.fixedPoint)
	{
		//std::cout << fixedA.fixedPoint << std::endl;
		return(fixedA);
	}
	else if (fixedA.fixedPoint < fixedB.fixedPoint)
	{
		//std::cout << fixedB.fixedPoint << std::endl;
		return(fixedB);
	}
	return(fixedA);
}


Fixed		Fixed::max(const Fixed& fixedA, const Fixed& fixedB)
{
	if (fixedA.fixedPoint > fixedB.fixedPoint)
	{
//		std::cout << fixedA.fixedPoint << std::endl;
		return(fixedA);
	}
	else if (fixedA.fixedPoint < fixedB.fixedPoint)
	{
		//std::cout << fixedB.fixedPoint << std::endl;
		return(fixedB);
	}
	return(fixedA);
}


Fixed		Fixed::min(Fixed& fixedA, Fixed& fixedB)
{
	if (fixedA.fixedPoint > fixedB.fixedPoint)
	{
//		std::cout << fixedA.fixedPoint << std::endl;
		return(fixedA);
	}
	else if (fixedA.fixedPoint < fixedB.fixedPoint)
	{
		//std::cout << fixedB.fixedPoint << std::endl;
		return(fixedB);
	}
	return(fixedA);
}

Fixed		Fixed::min(const Fixed& fixedA, const Fixed& fixedB)
{
	std::cout << "fixed A ==> " << fixedA.fixedPoint << std::endl;
	std::cout << "fixed B ==> " << fixedB.fixedPoint << std::endl;
	if (fixedA.fixedPoint > fixedB.fixedPoint)
	{
//		std::cout << fixedB.fixedPoint << std::endl;
		return(fixedB);
	}
	else if (fixedA.fixedPoint < fixedB.fixedPoint)
	{
		//std::cout << fixedA.fixedPoint << std::endl;
		return(fixedA);
	}
	return(fixedA);
}

Fixed::~Fixed()
{
}
