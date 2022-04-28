#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
	this->m_weapon = nullptr;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (!(this->m_weapon))
		std::cout << this->m_name << " tried to attack but failed miserably..." << std::endl;
	else
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}
