#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(const FragTrap&);
	~FragTrap();
	void	highFivesGuys();

	protected:
};

#endif
