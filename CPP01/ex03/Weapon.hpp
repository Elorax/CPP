#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class	Weapon
{
	public:
	Weapon(std::string type = "NO_NAME");
	const std::string&	getType() const;
	void	setType(std::string type);
	~Weapon();

	private:
	std::string	m_type;
};

#endif
