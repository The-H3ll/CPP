

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

		void	operator = ( const	Fixed& fixed);
        void    operator > ( const Fixed& fixed);
        void    operator < ( const Fixed& fixed );
        void    operator >= (const Fixed& fixed );
        void    operator <= ( const Fixed& fixed );
        void    operator == ( const Fixed& fixed );
        void    operator != ( const Fixed& fixed );

		Fixed   operator + ( const Fixed& fixed );
		Fixed	operator * ( const Fixed& fixed );
		Fixed   operator / ( const Fixed& fixed );
		Fixed   operator - ( const Fixed& fixed );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float   toFloat( void ) const;
		int     toInt( void ) const;

		Fixed    operator ++ ();
		Fixed    operator ++ ( int );
		Fixed    operator -- ();
		Fixed    operator -- ( int );

		static Fixed		max(const Fixed& fixedA, const Fixed& fixedB);
		static Fixed		max(Fixed& fixedA, Fixed& fixedB);
		static Fixed		min(Fixed& fixedA, Fixed& fixedB);
		static Fixed		min(const Fixed& fixedA, const Fixed& fixedB);

};

std::ostream&    operator << ( std::ostream& out, const Fixed& fixed);

#endif
