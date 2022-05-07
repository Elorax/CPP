#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		//Masquage
		ScavTrap(string name = "C3PO");
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		void	attack(const string &target);

		//New methods
		void	guardGate();

};

#endif
