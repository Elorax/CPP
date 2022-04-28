#include <iostream>

char	*ft_str_toupper(char *str)
{
	int	i(0);

	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return (str);
}


int main(int argc, char **argv)
{
	int	i(1);
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		std::cout << ft_str_toupper(argv[i]);
		i++;
	}
	std::cout << std::endl;
}
