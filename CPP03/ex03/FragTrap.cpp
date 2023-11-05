/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:49:14 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 17:20:23 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	std::cout << "FragTrap constructor used" << std::endl;
}
FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy)
{
	std::cout << "FragTrap " << this->_name << " (copied from " << toCopy._name << ") says good morning !!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor used" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string	str;
	std::cout << "Hey guys, High Fives !" << std::endl;
	do
	{
		std::cout << "(Please type \"High Fives !\")" << std::endl;
		std::getline(std::cin, str);
	} while (str != "High Fives !");
	std::cout << "Yeeaaaaah you are such a good booiiiii !" << std::endl;
}
