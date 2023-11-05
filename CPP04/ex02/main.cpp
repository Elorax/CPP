#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const	AAnimal* j = new Dog();
	const	AAnimal* i = new Cat();
	std::cout << std::endl << std::endl;
	delete j;
	delete i;
	std::cout << std::endl << std::endl;

//	AAnimal	test;
//	Impossible to create instance of abstrait class
	Dog	toutou;
	Cat	minou;

	return (0);

}
