/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:10:25 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:10:26 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_value = nb << this->m_nbBitsFracPart;
}

Fixed::Fixed(const float nb)
{
	float temp;

	std::cout << "Float constructor called" << std::endl;
	temp = nb * (1 << this->m_nbBitsFracPart);
	this->m_value = (int)roundf(temp);

}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->m_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy assignement operator called" << std::endl;
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
	flux << fixed.toFloat();
	return (flux);
}
