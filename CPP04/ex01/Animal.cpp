#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	brain = new Brain();
	cout << "Animal created !" << endl;
}

Animal::Animal(const Animal& toCopy)
{
	cout << "Animal copy constructor called" << endl;
	brain = new Brain(*(toCopy.brain));
	this->_type = toCopy._type;
}


Animal	&Animal::operator=(const Animal &toAssign)
{
	this->_type = toAssign._type;
	this->brain = new Brain(*(toAssign.brain));
	return (*this);
}

string	Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal()
{
	if (this->brain)
		delete (this->brain);
	cout << "Animal DESTROYED" << endl;
}

void	Animal::makeSound() const
{
	cout << "*makes some strange sounds*" << endl;
}

string	Animal::getIdea(int nb) const
{
	return (this->brain->getIdea(nb));
}
void	Animal::setIdea(string str, int nb)
{
	this->brain->setIdea(str, nb);
}
