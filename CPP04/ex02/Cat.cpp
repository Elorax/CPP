#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	cout << "baby kitty just born omg so cute !!!" << endl;
	brain = new Brain();
	_type = "Cat";
}
Cat::Cat(const Cat& toCopy): AAnimal(toCopy)
{
	cout << "baby kitty just copied from another baby kitty omg omg" << endl;
	this->brain = NULL;
	*this = toCopy;
}

Cat	&Cat::operator=(const Cat &toAssign)
{
	this->_type = toAssign._type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*toAssign.brain);
	return (*this);
}


Cat::~Cat()
{
	delete (this->brain);
	cout << "MEAOEJAEAAOOOHZZN!!!" << endl;
}

void	Cat::makeSound() const
{
	cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << endl;
	cout << "*flies with a rainbow in the %#$*" << endl;
}

string	Cat::getIdea(int nb) const
{
	return (this->brain->getIdea(nb));
}
void	Cat::setIdea(string str, int nb)
{
	this->brain->setIdea(str, nb);
}
