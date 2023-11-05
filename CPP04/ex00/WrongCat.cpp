#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "baby kitty just born omg so cute !!!" << std::endl;
	_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& toCopy): WrongAnimal(toCopy)
{
	std::cout << "baby kitty just copied from another baby kitty omg omg" << std::endl;
	*this = toCopy;
}
/*
WrongCat	&WrongCat::operator=(const & toAssign)
{
	this->_type = toAssign._type;
	return (*this);
}*/

WrongCat::~WrongCat()
{
	std::cout << "MEAOEJAEAAOOOHZZN!!!" << std::endl;
}

void	WrongCat::makeSound()	const
{
	std::cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << std::endl;
	std::cout << "*flies with a rainbow in the ass*" << std::endl;
}
