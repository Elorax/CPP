#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout << "baby kitty just born omg so cute !!!" << std::endl;
	brain = new Brain();
	_type = "Cat";
}
Cat::Cat(const Cat& toCopy): AAnimal(toCopy)
{
	std::cout << "baby kitty just copied from another baby kitty omg omg" << std::endl;
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
	std::cout << "MEAOEJAEAAOOOHZZN!!!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "nyanyanyanyanyanyanyan nyanyanyanyanyanyanyan !!" << std::endl;
	std::cout << "*flies with a rainbow in the %#$*" << std::endl;
}

std::string	Cat::getIdea(int nb) const
{
	return (this->brain->getIdea(nb));
}
void	Cat::setIdea(std::string str, int nb)
{
	this->brain->setIdea(str, nb);
}
