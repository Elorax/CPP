#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name)
{
	_hp = 100;
	_ep = 50;
	_ad = 30;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	cout << "DiamondTrap constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy)
{
	*this = toCopy;
	cout << "DiamondTrap copy constructor called" << endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	_hp = toCopy._hp;
	_ep = toCopy._ep;
	_ad = toCopy._ad;
	_name = toCopy._name;
	ClapTrap::_name = toCopy._name + "_clap_name";
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
