#include "ClapTrap.hpp"


int main ()
{
	ClapTrap	R2D2("Pepere");
	ClapTrap	Fake_R2D2(R2D2);
	ClapTrap	C3PO("osef");

	R2D2.attack("nothing");
	Fake_R2D2.attack("nothing again");
	R2D2.takeDamage(4);

	C3PO = R2D2;
	R2D2.beRepaired(3);
	cout << C3PO;
	cout << R2D2;

	return (0);
}
