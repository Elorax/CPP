#include "ScalarConverter.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
		exit(0);
	std::string	str(av[1]);
	ScalarConverter::convert(str);
	return (0);
}
