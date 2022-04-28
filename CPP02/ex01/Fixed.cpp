#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int nb)
{
	this->m_value = nb << this->m_nbBitFracPart;
}

Fixed::Fixed(const float nb)
{
	float temp;
	//
	temp = nb * (1 << this->m_nbBitFracPart);
	this->m_value = (int)roundf(temp);

}

Fixed::Fixed(const Fixed &toCopy)
{
	cout << "Copy constructor called" << endl;
	this->m_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int 	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return(this->m_value);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->m_value = raw;
}

Fixed& Fixed::operator=(const Fixed &toAssign)
{
	cout << "Copy assignement operator called" << endl;
	this->m_value = toAssign.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->m_value >> 8);
}

float	negPowerOfTwo(int pow)
{
	float ret(1);

	for(int i = 0; i < pow; i++)
	{
		ret/=2;
	}
	return(ret);
}

float	toFloat(void) const
{
	return (this->m_value >> this->m_nbBitsFracPart);
}

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed)
{
	flux << fixed.toFloat();
	return (flux);
}
