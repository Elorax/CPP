#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("K.R.O.T.E")
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	cout << "FragTrap constructor used" << endl;
}

FragTrap::FragTrap(string name): ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
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
	cout << "Yeeaaaaah good booiiiii !" << endl;
}
