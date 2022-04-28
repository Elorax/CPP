#include "Zombie.hpp"

int main()
{
	Zombie	*zombieOnHeap;
	Zombie	zombieOnStack("Mam'zelle bisson");

	zombieOnHeap = newZombie("Pepere");
	zombieOnStack.announce();
	zombieOnHeap->announce();
	randomChump("Someone we didn't care about anyway");
	delete zombieOnHeap;
	return(0);
}
