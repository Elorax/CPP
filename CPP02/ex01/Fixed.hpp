/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:10:29 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:10:30 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

using	std::string;
using	std::cout;
using	std::endl;

class	Fixed
{
	public:
	Fixed();
	Fixed(const Fixed &toCopy);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &operator=(Fixed const &toAssign);

	//exercice 01
	Fixed(const int nb);
	Fixed(const float nb);
	float	toFloat(void) const;
	int	toInt(void) const;

	private:
	int	m_value;
	static const int	m_nbBitsFracPart = 8;

};

std::ostream &operator<<(std::ostream &flux, Fixed const& fixed);

#endif
