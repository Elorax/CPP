#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	cout << "baby kitty just born omg so cute !!!" << endl;
	_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& toCopy): WrongAnimal(toCopy)
{
	cout << "baby kitty just copied from another baby kitty omg omg" << endl;
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
	cout << "MEAOEJAEAAOOOHZZN!!!" << endl;
}

void	WrongCat::makeSound()	const
{
	cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << endl;
	cout << "*flies with a rainbow in the ass*" << endl;
}
