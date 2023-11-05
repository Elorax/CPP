#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "baby kitty just born omg so cute !!!" << std::endl;
	_type = "Cat";
}
Cat::Cat(const Cat& toCopy): Animal(toCopy)
{
	std::cout << "baby kitty just copied from another baby kitty omg omg" << std::endl;
	*this = toCopy;
}
/*
Cat	&Cat::operator=(const & toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}*/


Cat::~Cat()
{
	std::cout << "MEAOEJAEAAOOOHZZN!!!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << std::endl;
	std::cout << "*flies with a rainbow in the %#$*" << std::endl;
}
