#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 30;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy): ClapTrap(toCopy._name), FragTrap(toCopy._name), ScavTrap(toCopy._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
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
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << " _name : " << this->_name << std::endl;
	std::cout << " ClapTrap::_name : " << this->ClapTrap::_name << std::endl;
}
