#include <iostream>
#include <string>


class	Zombie
{
	public:
	Zombie(std::string name = "NO_NAME", std::string type = "NO_TYPE");
	void	announce();
	~Zombie();

	private:
	std::string	m_type;
	std::string	m_name;

};
