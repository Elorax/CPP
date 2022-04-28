#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		cout << "Please execute program with \"DEBUG\", \"INFO\", \"WARNING\", or \"ERROR\" argument." << endl;
		return (1);
	}

	Harl	harl;
	string level = av[1];
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int asked_level(-1);
	for(int i(0);i < 4; i++)
	{
		if (levels[i] == level)
			asked_level = i;
	}
	if (asked_level == -1)
	{
		cout << "[Probably complaining about insgnificant problems ]" << endl;
		return (0);
	}
	for(int i(asked_level);i < 4; i++)
	{
		cout << "[ " << levels[i] << " ]" << endl;
		harl.complain(levels[i]);
	}
	return (0);
}
