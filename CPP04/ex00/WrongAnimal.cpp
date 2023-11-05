#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal " << _type << " created !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = toCopy;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}


std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal DESTROYED" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*makes some strange sounds*" << std::endl;
}
