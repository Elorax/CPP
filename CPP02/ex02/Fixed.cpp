/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:10:50 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:10:51 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
//	std::cout << "Int constructor called" << std::endl;
	this->m_value = nb << this->m_nbBitsFracPart;
}

Fixed::Fixed(const float nb)
{
	float temp;

//	std::cout << "Float constructor called" << std::endl;
	temp = nb * (1 << this->m_nbBitsFracPart);
	this->m_value = (int)roundf(temp);

}

Fixed::Fixed(const Fixed &toCopy)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->m_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

int 	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return(this->m_value);
}

void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->m_value = raw;
}


Fixed& Fixed::operator=(const Fixed &toAssign)
{
//	std::cout << "Copy assignement operator called" << std::endl;
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
//	std::cout << "ostream operator called" << std::endl;
	flux << fixed.toFloat();
	return (flux);
}


//EXERCICE 02

Fixed operator+(const Fixed nb1, const Fixed nb2)
{
	Fixed result(nb1);
	result.setRawBits(nb1.getRawBits() + nb2.getRawBits());
	return result;
}


Fixed operator-(const Fixed nb1, const Fixed nb2)
{
	Fixed result(nb1);
	result.setRawBits(nb1.getRawBits() - nb2.getRawBits());
	return result;
}


Fixed operator*(const Fixed nb1, const Fixed nb2)
{
	Fixed result(nb1.toFloat() * nb2.toFloat());
	return result;
}

Fixed operator/(const Fixed nb1, const Fixed nb2)
{
	Fixed result(nb1.toFloat() / nb2.toFloat());
	return result;
}

Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed cpy(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (cpy);
}
Fixed	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed cpy(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (cpy);
}


Fixed	Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}
Fixed	Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}
Fixed	Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}
Fixed	Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

bool	operator>(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() > nb2.getRawBits());
}
bool	operator<(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() < nb2.getRawBits());
}
bool	operator==(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() == nb2.getRawBits());
}
bool	operator<=(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() <= nb2.getRawBits());
}
bool	operator>=(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() >= nb2.getRawBits());
}
bool	operator!=(const Fixed nb1, const Fixed nb2)
{
	return (nb1.getRawBits() != nb2.getRawBits());
}
