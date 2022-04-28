#ifndef ZOMBIE_CPP
# include <iostream>
# include <string>

class	Zombie
{
	public:
	Zombie(std::string name = "NO_NAME");
	void	announce(void);
	~Zombie();

	private:
	std::string	m_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
