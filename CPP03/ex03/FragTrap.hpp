#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	FragTrap : virtual public ClapTrap
{
	public:
	FragTrap(string name = "K.R.O.T.E");
	FragTrap(const FragTrap&);
	~FragTrap();
	void	highFivesGuys();

	protected:
};

#endif
