#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	public:
	HumanB(std::string name = "NO_NAME");
	void	attack();
	void	setWeapon(Weapon &weapon);
	~HumanB();

	private:
	Weapon *m_weapon;
	std::string m_name;
};

#endif
