/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 06:14:18 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 06:16:30 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name): _name(name), _hp(10), _ep(10), _ad(0)
{
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy): _name(toCopy._name), _hp(toCopy._hp), _ep(toCopy._ep), _ad(toCopy._ad)
{
	cout << "Copy constructor called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << this->_name << " has been destroyed" << endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& toCopy)
{
	cout << "Assignment operator called" << endl;
	this->_name = toCopy.getName();
	this->_hp = toCopy.getHP();
	this->_ep = toCopy.getEP();
	this->_ad = toCopy.getAD();
	return (*this);
}

void	ClapTrap::attack(const string &target)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_ep--;
		cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;
	if (this->_hp < 0)
		this->_hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_ep--;
		this->_hp += amount;
		cout << "ClapTrap " << this->_name << " healed itself for " << amount << " HP !" << endl;
	}
	else
		cout << "ClapTrap " << this->_name << " can't be healed" << endl;
}

string	ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getHP() const
{
	return (this->_hp);
}
int	ClapTrap::getEP() const
{
	return (this->_ep);
}
int	ClapTrap::getAD() const
{
	return (this->_ad);
}

std::ostream	&operator<<(std::ostream &flux, ClapTrap const& clappy)
{
	flux << clappy.getName() << " has " << clappy.getHP() << " HP, " << clappy.getEP() << " EP, and " << clappy.getAD() << " AD." << endl;
	return (flux);
}
