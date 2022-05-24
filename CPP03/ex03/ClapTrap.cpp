/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:46:22 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/21 15:46:23 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name): _name(name), _hp(10), _ep(10), _ad(0)
{
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	cout << "ClapTrap copy constructor called" << endl;
	this->_name = toCopy._name;
	this->_hp = toCopy._hp;
	this->_ep = toCopy._ep;
	this->_ad = toCopy._ad;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap " << this->_name << " has been destroyed" << endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& toCopy)
{
	cout << "ClapTrap Assignment operator called" << endl;
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
		cout << "ClapTrap " << this->_name << " tried to heal itself but is out of energy !" << endl;
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
