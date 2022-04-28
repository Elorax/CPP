#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::~Zombie()
{
	std::cout << m_name << " just died, again." << std::endl;
}

void	Zombie::announce()
{
	std::cout << "<" << m_name << " (" << m_type << ")> Brraaaaaiiinnss....." << std::endl;
}
