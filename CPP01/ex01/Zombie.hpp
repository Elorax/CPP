#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP
# include <iostream>
# include <string>

class	Zombie
{
	public:
	Zombie(std::string name = "NO_NAME");
	void	announce(void);
	void	set_name(std::string name);
	~Zombie();

	private:
	std::string	m_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
