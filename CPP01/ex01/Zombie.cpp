/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:42:27 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 04:42:27 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name)
{
}

Zombie::~Zombie()
{
	std::cout << m_name << " just died, again." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	m_name = name;
}

void	Zombie::announce()
{
	std::cout << m_name << ": Brraaaaaiiinnss....." << std::endl;
}
