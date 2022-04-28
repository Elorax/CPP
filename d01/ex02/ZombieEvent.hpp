#ifndef ZOMBIE_EVENT_CPP
 #define ZOMBIE_EVENT_CPP
 #include <iostream>
 #include <string>
 #include <ctime>
 #include "Zombie.hpp"


class	ZombieEvent
{
	public:
	ZombieEvent(std::string type = "NO_TYPE");
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	randomChump();
	private:
	std::string	m_type;
};

#endif
