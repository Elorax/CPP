/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:26:58 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:41:45 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(float x, float y): _x(x), _y(y)
{
}

Point::Point(): _x(0), _y(0)
{
}

Point::Point(Point const &rhs): _x(rhs._x), _y(rhs._y)
{
}

Point	&Point::operator=(Point const &rhs)
{
	(void) rhs;
	return *this;
}

int	Point::getx() const
{
	return (this->_x.toInt());
}

int	Point::gety() const
{
	return (this->_y.toInt());
}

Point::~Point()
{
}
