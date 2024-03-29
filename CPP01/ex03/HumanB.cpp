/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:46:29 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:46:29 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : m_name(name), m_weapon(weapon)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (!(this->m_weapon))
		std::cout << this->m_name << " tried to attack but failed miserably..." << std::endl;
	else
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}
