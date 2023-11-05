#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	std::cout << "A dog has arrived." << std::endl;
	brain = new Brain();
	_type = "Dog";
}
Dog::Dog(const Dog& toCopy): AAnimal(toCopy)
{
	std::cout << "Dog has just been copied !" << std::endl;
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
	std::cout << "Dog just bite the dust." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Ggrrrrrr... Wouf !! WOuF !!! WWWOUFF !!!" << std::endl;
}

std::string	Dog::getIdea(int nb) const
{
	return (this->brain->getIdea(nb));
}
void	Dog::setIdea(std::string str, int nb)
{
	this->brain->setIdea(str, nb);
}
