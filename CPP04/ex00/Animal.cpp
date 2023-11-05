#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal created !" << std::endl;
}

Animal::Animal(const Animal& toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = toCopy;
}

Animal	&Animal::operator=(const Animal &toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal()
{
	std::cout << "Animal DESTROYED" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "*makes some strange sounds*" << std::endl;
}
