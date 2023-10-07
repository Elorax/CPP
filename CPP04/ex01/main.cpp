#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();

	Animal	*tab = new Animal[6]();

	for (int i = 0; i < 3; i++)
	{
		tab[i] = Dog();
	}
	for (int i = 3; i < 6; i++)
	{
		tab[i] = Cat();
	}

	delete j;
	delete i;
	delete[]	tab;

	Cat	chat1 = Cat();
	chat1.setIdea("Dormir...", 0);
	Cat	chat2 = Cat(chat1);
	chat1.setIdea("Manger !?", 0);
	cout << chat1.getIdea(0) << chat2.getIdea(0) << endl;
	
	return (0);

}
