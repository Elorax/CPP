#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	/*
	{
		const	Animal* j = new Dog();
		const	Animal* i = new Cat();
	
		Animal	*tab = new Animal[6]();
	
		for (int a = 0; a < 3; a++)
		{
			tab[a] = Dog();
		}
		for (int a = 3; a < 6; a++)
		{
			tab[a] = Cat();
		}
	
		delete j;
		delete i;
		delete[]	tab;
	}*/
	{
		Cat	chat1 = Cat();
		Cat	chat2;
		chat1.setIdea("Dormir...", 0);
		chat2.setIdea("Manger...", 0);
		chat2 = chat1;
		chat1.setIdea("Jouer...", 0);
		Cat	chat3 = Cat(chat1);
		cout << chat1.getIdea(0) << chat2.getIdea(0) << chat3.getIdea(0) << endl;
	}
		return (0);
}
