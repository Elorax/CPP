#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	ClapTrap
{
	public:
	ClapTrap(string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap&);

	void	attack(const string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	string	getName() const;
	int		getHP() const;
	int		getEP() const;
	int		getAD() const;

	private:

	string	_name;
	int	_hp;
	int	_ep;
	int	_ad;
};

std::ostream	&operator<<(std::ostream &flux, ClapTrap const& clappy);

#endif	
