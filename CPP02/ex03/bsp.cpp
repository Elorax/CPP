/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:27:26 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 05:45:01 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	calculAire(Point const a, Point const b, Point const c)
{
	Fixed aire(a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety()));
	aire = aire / 2;
	if (aire.toFloat() < 0)
		aire = aire * (-1);
	return (aire);
}

bool	bsp(Point const a,Point const b, Point const c, Point const point)
{
	if (calculAire(a, b, c) < calculAire(a, b, point) + calculAire(b, c, point) + calculAire(c, a, point))
		return false;
	else if (calculAire(a, b, point) == 0 || calculAire(a, c, point) == 0 || calculAire(c, b, point) == 0)
			return false;
	else
		return true;
}
