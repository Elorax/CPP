#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	_brain = new Brain();
	cout << "Animal created !" << endl;
}

Animal::Animal(const Animal& toCopy)
{
	cout << "Animal copy constructor called" << endl;
	_brain = new Brain(toCopy._brain);
	this->_type = toCopy._type;
}


//a voir pour pas leak
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
	delete (this->_brain);
	cout << "Animal DESTROYED" << endl;
}

void	Animal::makeSound() const
{
	cout << "*makes some strange sounds*" << endl;
}
