#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name = "K.R.O.T.E");
	FragTrap(const FragTrap&);
	~FragTrap();
	void	highFivesGuys();

	protected:
};

#endif
