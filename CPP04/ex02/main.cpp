#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	delete j;
	delete i;

//	Animal	test;
//	Impossible to create instance of abstrait class
	Dog	toutou;
	Cat	minou;

	return (0);

}
