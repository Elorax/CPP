#include <iostream>
#include <string>
#include <ctime>
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	event("Pepere");

	Zombie *zombie01;
	zombie01 = event.newZombie("Adrian");
	Zombie	*zombie02 = event.newZombie("Une patate");
	zombie02->announce();
	zombie01->announce();
	event.setZombieType("Energique");
	Zombie zombie03 = event.randomChump();
	delete zombie01;
	delete zombie02;
	return(0);
}
