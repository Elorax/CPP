#include <iostream>
#include <string>
#include <ctime>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) : m_type(type)
{
}
ZombieEvent::~ZombieEvent()
{
}


void	ZombieEvent::setZombieType(std::string type)
{
	m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie;
	zombie = new Zombie(name, m_type);
	return zombie;
}

Zombie	ZombieEvent::randomChump()
{
	std::srand(std::time(nullptr));
	char	nom[5];
	nom[0] = std::rand() % 26 + 'A';
	nom[1] = std::rand() % 26 + 'a';	
	nom[2] = std::rand() % 26 + 'a';	
	nom[3] = std::rand() % 26 + 'a';	
	nom[4] = std::rand() % 26 + 'a';
	Zombie	zombie(nom, m_type);
	zombie.announce();
	return zombie;
}
