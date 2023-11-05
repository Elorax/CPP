#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "";

}
Brain::Brain(const Brain& toCopy)
{
	std::cout << "Brain copy constructor" << std::endl;
	for(int i = 0; i < 100 ; i++)
		ideas[i] = toCopy.ideas[i];
}

Brain	&Brain::operator=(const Brain &toAssign)
{
	std::cout << "Brain assign constructor" << std::endl;
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = toAssign.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deleted" << std::endl;
}

void	Brain::setIdea(std::string str, int nb)
{
	this->ideas[nb] = str;
}

std::string	Brain::getIdea(int nb) const
{
	return(this->ideas[nb]);
}
