#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
//	const	WrongAnimal* meta = new WrongAnimal();
//	const	Animal* j = new Dog();
//	const	WrongAnimal* i = new WrongCat();

	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();	//cat sound
	j->makeSound(); //Dog sound
	meta->makeSound(); //Animal sound
	delete(meta);
	delete(i);
	delete(j);

	return (0);

}
