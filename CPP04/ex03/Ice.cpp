/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:39 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:41 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
//	this->_type = "ice";
}

Ice::Ice(const Ice& toCopy): AMateria(toCopy)
{
//	this->_type = toCopy._type;
}

Ice	&Ice::operator=(const Ice & toAssign)
{
	(void) toAssign;
	return (*this);
}

Ice::~Ice()
{

}

AMateria	*Ice::clone() const
{
	AMateria *ret = new Ice();
	return (ret);
}
