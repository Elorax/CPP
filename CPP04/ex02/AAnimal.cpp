#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	cout << "Animal created !" << endl;
}

AAnimal::AAnimal(const AAnimal& toCopy)
{
	cout << "Animal copy constructor called" << endl;
	this->_type = toCopy._type;
}


AAnimal	&AAnimal::operator=(const AAnimal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}

string	AAnimal::getType() const
{
	return (this->_type);
}

AAnimal::~AAnimal()
{
	cout << "Animal DESTROYED" << endl;
}
