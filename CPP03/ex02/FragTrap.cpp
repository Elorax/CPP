#include "FragTrap.hpp"

FragTrap::FragTrap(string name): ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	cout << "FragTrap constructor used" << endl;
}
FragTrap::FragTrap(const FragTrap& toCopy)
{
	this->_name = toCopy._name;
	this->_hp = toCopy._hp;
	this->_ep = toCopy._ep;
	this->_ad = toCopy._ad;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor used" << endl;
}

void	FragTrap::highFivesGuys()
{
	string	str("");
	cout << "Hey guys, High Fives !" << endl;
	while (str != "High Fives !")
	{
		cout << "(Please type \"High Fives !\")" << endl;
		std::cin >> str;
	}
	cout << "Yeeaaaaah you are such a good booiiiii !" << endl;
}
