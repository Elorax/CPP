#include "Cat.hpp"

Cat::Cat(): Animal()
{
	cout << "baby kitty just born omg so cute !!!" << endl;
	_type = "Cat";
}
Cat::Cat(const Cat& toCopy): Animal(toCopy)
{
	cout << "baby kitty just copied from another baby kitty omg omg" << endl;
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
	cout << "MEAOEJAEAAOOOHZZN!!!" << endl;
}

void	Cat::makeSound() const
{
	cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << endl;
	cout << "*flies with a rainbow in the %#$*" << endl;
}
