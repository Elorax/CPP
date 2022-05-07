#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	cout << "Animal created !" << endl;
}

Animal::Animal(const Animal& toCopy)
{
	cout << "Animal copy constructor called" << endl;
	*this = toCopy;
}

Animal	&Animal::operator=(const Animal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}

string	Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal()
{
	cout << "Animal DESTROYED" << endl;
}

void	Animal::makeSound() const
{
	cout << "*makes some strange sounds*" << endl;
}
