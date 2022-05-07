#include "Zombie.hpp"

Zombie::Zombie(std::string name) : m_name(name)
{
}

Zombie::~Zombie()
{
	std::cout << m_name << " just died, again." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	m_name = name;
}

void	Zombie::announce()
{
	std::cout << m_name << ": Brraaaaaiiinnss....." << std::endl;
}