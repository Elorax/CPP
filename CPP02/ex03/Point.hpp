/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:59:17 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:59:18 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <string>
# include "Fixed.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Point
{
	public:
	Point();
	Point(float const x, float const y);
	Point(Point const &rhs);
	Point	&operator=(Point const &rhs);
	~Point();
	int	getx() const;
	int	gety() const;

	private:
	Fixed const _x;
	Fixed const _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
