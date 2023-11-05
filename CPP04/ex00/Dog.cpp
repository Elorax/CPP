#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "A dog has arrived." << std::endl;
	_type = "Dog";
}
Dog::Dog(const Dog& toCopy): Animal(toCopy)
{
	std::cout << "Dog has just been copied !" << std::endl;
	*this = toCopy;
}
/*
Dog	&Dog::operator=(const & toAssign)
{

	return (*this);
}*/


Dog::~Dog()
{
	std::cout << "Dog just bite the dust." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Ggrrrrrr... Wouf !! WOuF !!! WWWOUFF !!!" << std::endl;
}
