#ifndef PONY_HPP
 #define PONY_HPP
 #include <iostream>
 #include <string>

class	Pony
{
	public:
		Pony(std::string nom = "Ponyta", std::string color = "Blanc", int size = 100);
		void	sePresenter();
		~Pony();
	private:
		std::string m_name;
		std::string m_color;
		int m_size;
};

void	ponyOnTheHeap(std::string nom = "Ponyta", std::string color = "Blanc", int size = 100);
void	ponyOnTheStack(std::string nom = "Ponyta", std::string color = "Blanc", int size = 100);
#endif
