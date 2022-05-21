#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name): ClapTrap(name)
{
	//this->_hp = this->FragTrap::_hp;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 30;
//	this->_ad = this->FragTrap::_ad;
	this->ClapTrap::_name = name + "_clap_name";
	cout << "DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy): ClapTrap(toCopy._name), FragTrap(toCopy._name), ScavTrap(toCopy._name)
{
	cout << "DiamondTrap copy constructor called" << endl;
	*this = toCopy;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	this->_hp = toCopy._hp;
	this->_ep = toCopy._ep;
	this->_ad = toCopy._ad;
	this->_name = toCopy._name;
	this->ClapTrap::_name = toCopy._name + "_clap_name";
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap destructor called" << endl;
}

void	DiamondTrap::whoAmI()
{
	cout << " _name : " << this->_name << endl;
	cout << " ClapTrap::_name : " << this->ClapTrap::_name << endl;
}
