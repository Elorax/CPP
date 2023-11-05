/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:02:41 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:02:41 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>


class	Fixed
{
	public:
	Fixed();
	Fixed(const Fixed &toCopy);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &operator=(Fixed const &toAssign);

	private:
	int	m_value;
	static const int	m_nbBitsFracPart = 8;

};


#endif
