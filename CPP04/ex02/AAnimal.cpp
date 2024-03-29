#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << "Animal created !" << std::endl;
}

AAnimal::AAnimal(const AAnimal& toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = toCopy._type;
}


AAnimal	&AAnimal::operator=(const AAnimal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal DESTROYED" << std::endl;
}
