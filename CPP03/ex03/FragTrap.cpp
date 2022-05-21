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

FragTrap::FragTrap(string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	cout << "FragTrap constructor used" << endl;
}
FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy)
{
	cout << "FragTrap " << this->_name << " (copied from " << toCopy._name << ") says good morning !!" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor used" << endl;
}

void	FragTrap::highFivesGuys()
{
	string	str;
	cout << "Hey guys, High Fives !" << endl;
	do
	{
		cout << "(Please type \"High Fives !\")" << endl;
		std::getline(std::cin, str);
	} while (str != "High Fives !");
	cout << "Yeeaaaaah you are such a good booiiiii !" << endl;
}
