#include "Zombie.hpp"

int main()
{
	Zombie	*Horde;

	Horde = zombieHorde(10, "A ZOOOMMBIIIEEEE");
	std::cout << "retour fonction" << std::endl;
	if (!Horde)
		return (1);
	for(int i = 0; i < 10; i++)
	{
		std::cout << "Zombie " << i << " : ";
		Horde[i].announce();
	}
	delete [] Horde;
	return(0);
}
