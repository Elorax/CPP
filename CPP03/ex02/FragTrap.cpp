#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("K.R.O.T.E")
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap constructor used" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap constructor used" << std::endl;
}
FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy)
{
	std::cout << "FragTrap " << this->_name << " (copied from " << toCopy._name << ") says good morning !!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor used" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string	str;
	std::cout << "Hey guys, High Fives !" << std::endl;
	do
	{
		std::cout << "(Please type \"High Fives !\")" << std::endl;
		std::getline(std::cin, str);
	} while (str != "High Fives !");
	std::cout << "Yeeaaaaah good booiiiii !" << std::endl;
}
