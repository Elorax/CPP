#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	public:
	DiamondTrap(std::string name = "Shine Bright like a");
	DiamondTrap(const DiamondTrap& toCopy);
	~DiamondTrap();

	DiamondTrap	&operator=(const DiamondTrap &toCopy);

	void	whoAmI();
	using	ScavTrap::attack;

	private:
	std::string	_name;
};

#endif
