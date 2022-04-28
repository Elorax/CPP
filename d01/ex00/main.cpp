#include "Pony.hpp"
#include <iostream>
#include <string>

void	ponyOnTheHeap(std::string nom, std::string color, int size)
{
	Pony *poney;
	poney = new Pony(nom, color, size);
	poney->sePresenter();
	delete poney;
}

void	ponyOnTheStack(std::string nom, std::string color, int size)
{
	Pony poney(nom, color, size);
	poney.sePresenter();
}

int main()
{
	std::cout << "Pony on the Heap : " << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony on the Stack : " << std::endl;
	ponyOnTheStack("Adrian le pepere", "bobo", 160);
	return (0);
}
