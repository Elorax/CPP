#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string nom, std::string color, int size) : m_name(nom), m_color(color), m_size(size)
{
}

Pony::~Pony()
{
	std::cout << this->m_name << " vient de mourir dans d'atroces souffrances." << std::endl;
}
void	Pony::sePresenter()
{
	std::cout << "HEEYJKGµHGHEYEYEYEKHHHG !! Je m'appelle " << m_name << " et je suis tout " << m_color << ". Je mesure " << m_size << "cm, presque autant qu'un cheval ! Huuuuh !" << std::endl;
}

