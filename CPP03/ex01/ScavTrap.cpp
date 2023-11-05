#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Scav_No_Name")
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	this->_guardMode = 0;
	std::cout << "ScavTrap " << this->_name << " en fonctioooooon !!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	std::cout << "ScavTrap " << this->_name << " en fonctioooooon !!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy): ClapTrap(toCopy)
{
	std::cout << "ScavTrap " << this->_name << " (copied from " << toCopy._name << ") en fonctioooooon !!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " : Abort mission." << std::endl;
}

void	ScavTrap::guardGate()
{
	this->_guardMode = !this->_guardMode;
	if (this->_guardMode)
		std::cout << "ScavTrap " << this->_name << " entering guard gate mode !" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " leaving guard gate mode !" << std::endl;	
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_ep--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this ->_ad << "damage. What a good Scavyboooiii !" << std::endl;
	}
}
