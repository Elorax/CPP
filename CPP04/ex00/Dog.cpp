#include "Dog.hpp"

Dog::Dog(): Animal()
{
	cout << "A dog has arrived." << endl;
	_type = "Dog";
}
Dog::Dog(const Dog& toCopy): Animal(toCopy)
{
	cout << "Dog has just been copied !" << endl;
	*this = toCopy;
}
/*
Dog	&Dog::operator=(const & toAssign)
{

	return (*this);
}*/


Dog::~Dog()
{
	cout << "Dog just bite the dust." << endl;
}

void	Dog::makeSound() const
{
	cout << "Ggrrrrrr... Wouf !! WOuF !!! WWWOUFF !!!" << endl;
}
