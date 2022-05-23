/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:34 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:34 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(): AMateria("cure")
{
//	this->_type = "cure";
}

Cure::Cure(const Cure& toCopy): AMateria(toCopy)
{
//	this->_type = toCopy._type;
}

Cure	&Cure::operator=(const Cure &toAssign)
{
	(void) toAssign;
	return (*this);
}

Cure::~Cure()
{

}

AMateria	*Cure::clone() const
{
	AMateria *ret = new Cure();
	return (ret);
}
