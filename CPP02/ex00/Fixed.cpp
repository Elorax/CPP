#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	cout << "Default constructor called" << endl;
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

Fixed &Fixed::operator=(const Fixed &toAssign)
{
	cout << "Copy assignement operator called" << endl;
	this->m_value = toAssign.getRawBits();
	return (*this);
}
