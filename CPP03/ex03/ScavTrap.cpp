#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name): ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	cout << "ScavTrap " << this->_name << " en fonctioooooon !!!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy): ClapTrap(toCopy)
{
	cout << "ScavTrap " << this->_name << " (copied from " << toCopy._name << ") en fonctioooooon !!!" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << this->_name << " : Abort mission." << endl;
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap " << this->_name << " entering guard gate mode !" << endl;
}

void	ScavTrap::attack(const string &target)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_ep--;
		cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this ->_ad << "damage. What a good Scavyboooiii !" << endl;
	}
}
