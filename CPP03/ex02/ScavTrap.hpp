#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:

		//Masquage
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		void	attack(const string &target);

		//New methods
		void	guardGate();

	protected:
		bool	_guardMode;

};

#endif
