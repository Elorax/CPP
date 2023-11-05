/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:09:12 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/23 20:09:14 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::~AMateria()
{
}

void	AMateria::use(ICharacter const &target)
{
	if (this->_type == "ice")
		std::cout << "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}
