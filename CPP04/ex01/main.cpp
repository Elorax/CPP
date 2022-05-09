#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();

	Animal	*tab = new Animal[6]();
//	Dog		toutou();
//	Cat		kitty();

	for (int i = 0; i < 3; i++)
	{
		tab[i] = Dog();
	}
	for (int i = 3; i < 6; i++)
	{
		tab[i] = Cat();
	}

	for (int i = 0; i < 6; i++)
	{
		tab[i].setIdea("manger...", 0);
	}
	for (int i = 0; i < 6; i++)
	{
		cout << tab[i].getIdea(0);
	}

	delete j;
	delete i;
	delete[]	tab;
	return (0);

}
