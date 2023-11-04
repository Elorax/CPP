#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const	AAnimal* j = new Dog();
	const	AAnimal* i = new Cat();
	cout << endl << endl;
	delete j;
	delete i;
	cout << endl << endl;

//	AAnimal	test;
//	Impossible to create instance of abstrait class
	Dog	toutou;
	Cat	minou;

	return (0);

}
