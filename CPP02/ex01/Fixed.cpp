#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int nb)
{
	cout << "Int constructor called" << endl;
	this->m_value = nb << this->m_nbBitsFracPart;
}

Fixed::Fixed(const float nb)
{
	float temp;

	cout << "Float constructor called" << endl;
	temp = nb * (1 << this->m_nbBitsFracPart);
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
//	cout << "getRawBits member function called" << endl;
	return(this->m_value);
}

void	Fixed::setRawBits(int const raw)
{
//	cout << "setRawBits member function called" << endl;
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

float	Fixed::toFloat(void) const
{
	return (this->m_value / (float)(1 << Fixed::m_nbBitsFracPart));
}

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed)
{
	cout << "ostream operator called" << endl;
	flux << fixed.toFloat();
	return (flux);
}
