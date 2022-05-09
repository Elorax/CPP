#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain default constructor" << endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = "";

}
Brain::Brain(const Brain& toCopy)
{
	cout << "Brain copy constructor" << endl;
	for(int i = 0; i < 100 ; i++)
		ideas[i] = toCopy.ideas[i];
}

Brain	&Brain::operator=(const Brain &toAssign)
{
	cout << "Brain assign constructor" << endl;
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = toAssign.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	cout << "Brain deleted" << endl;
}

void	Brain::setIdea(string str, int nb)
{
	this->ideas[nb] = str;
}

string	Brain::getIdea(int nb) const
{
	return(this->ideas[nb]);
}
