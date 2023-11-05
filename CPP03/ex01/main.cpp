#include "ScavTrap.hpp"


int main ()
{
	ClapTrap	Pepere("Pepere");
	ScavTrap	Pepere_v2("Pepere_v2");
	ScavTrap	Contrefacon(Pepere_v2);


	Pepere.attack("nothing");
	Pepere_v2.attack("something");

	Contrefacon.guardGate();
	Pepere_v2.guardGate();
	Pepere_v2.guardGate();
	Pepere_v2.guardGate();
	
	std::cout << Pepere_v2;
	Pepere_v2.takeDamage(4);
	Pepere_v2.beRepaired(3);
	std::cout << Pepere;
	std::cout << Pepere_v2;
	std::cout << "----------------------" << std::endl;

	ClapTrap lele;
	ScavTrap lele_v2;
	std::cout << lele;
	std::cout << lele_v2;
	return (0);
}
