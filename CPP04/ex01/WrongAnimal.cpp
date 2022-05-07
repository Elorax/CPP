#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	cout << "WrongAnimal " << _type << " created !" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = toCopy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}


string	WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal DESTROYED" << endl;
}

void	WrongAnimal::makeSound() const
{
	cout << "*makes some strange sounds*" << endl;
}
