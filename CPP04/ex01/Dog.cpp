#include "Dog.hpp"

Dog::Dog(): Animal()
{
	cout << "A dog has arrived." << endl;
	brain = new Brain();
	_type = "Dog";
}
Dog::Dog(const Dog& toCopy): Animal(toCopy)
{
	cout << "Dog has just been copied !" << endl;
	this->brain = NULL;
	*this = toCopy;
}

Dog	&Dog::operator=(const Dog &toAssign)
{
	this->_type = toAssign._type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*toAssign.brain);
	return (*this);
}


Dog::~Dog()
{
	delete (this->brain);
	cout << "Dog just bite the dust." << endl;
}

void	Dog::makeSound() const
{
	cout << "Ggrrrrrr... Wouf !! WOuF !!! WWWOUFF !!!" << endl;
}

string	Dog::getIdea(int nb) const
{
	return (this->brain->getIdea(nb));
}
void	Dog::setIdea(string str, int nb)
{
	this->brain->setIdea(str, nb);
}
