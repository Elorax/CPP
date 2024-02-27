#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string &str)
{
	if (ScalarConverter::isInt(str))
	{
		std::cout << "INT" << std::endl;
		int nb = atoi(str.c_str());
		if (nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max())
			std::cout << "char : impossible" << std::endl;
		else if (!isprint(static_cast<char>(nb)))
			std::cout << "char : not displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
		std::cout << "int : " << nb << std::endl;
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
	}
	else if (ScalarConverter::isChar(str))
	{
		std::cout << "CHAR" << std::endl;
		char	c;
		c = str[str[0] == '\'' && str.size() == 3];
		std::cout << "char : '" << c << "'" << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
	}
	else if (ScalarConverter::isFloat(str))
	{
		std::cout << "float" << std::endl;
		float f = atof(str.c_str());
		if (std::isnan(f) || f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
			std::cout << "char : impossible" << std::endl;
		else if (!isprint(static_cast<char>(f)))
			std::cout << "char : not displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;

		if (std::isnan(f) ||f < static_cast<float>(std::numeric_limits<int>::min()) || f > static_cast<float>(std::numeric_limits<int>::max()))
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(f) << std::endl;
		std::cout << "float : " << static_cast<float>(f) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
	else if (ScalarConverter::isDouble(str))
	{
		std::cout << "double" << std::endl;
		double	d;
		d = atof(str.c_str());
		if (std::isnan(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
			std::cout << "char : impossible" << std::endl;
		else if (!isprint(static_cast<char>(d)))
			std::cout << "char : not displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
		if (std::isnan(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(d) << std::endl;
		if ((d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max()) && !std::isinf(d))
			std::cout << "float: impossible" << std::endl;
		else
			std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
	}
	else
		std::cout << "Incorrect input" << std::endl;
}

bool	ScalarConverter::isChar(const std::string &str)
{
	return ((str.size() == 3 && str[0] == '\'' && str[2] == '\'' && isprint(str[1])) || (str.size() == 1 && isprint(str[0]) && !isdigit(str[0])));
}

bool	ScalarConverter::isInt(const std::string &str)
{
	long long int	a(0);
	std::string::const_iterator	it = str.begin();
	if (str[0] == '+' || str[0] == '-')
		it++;
	for (; isdigit(*it) && it < str.end(); it++)
	{
		a *= 10;
		a = a - '0' + *it;
		if (a - 1 > std::numeric_limits<int>::max())
			return false;
	}
	if (str[0] == '-')
		a = -a;
	if (a < std::numeric_limits<int>::min() || a > std::numeric_limits<int>::max())
		return (false);
	return (it == str.end());
}

bool	ScalarConverter::isFloat(const std::string &str)	//might change with atof 
{
	int	nbPts(0);
	int	nbDigits(0);

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	std::string::const_iterator	it = str.begin();
	if (str[0] == '+' || str[0] == '-')
		it++;
	for (; it < str.end() - 1; it++)
	{
		if (*it == '.')
		{
			if (nbPts++)	//str contenant plusieurs pts : bad input
				return false;
		}
		else if (!isdigit(*it))
			return false;
		else
			nbDigits++;
	}
	return (*it == 'f' && nbPts <= 1 && nbDigits);
}

bool	ScalarConverter::isDouble(const std::string &str)	//might change with atof def of float input 
{
	int	nbPts(0);
	int	nbDigits(0);

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	std::string::const_iterator	it = str.begin();
	if (str[0] == '+' || str[0] == '-')
		it++;
	for (; it < str.end() - 1; it++)
	{
		if (*it == '.')
		{
			if (nbPts++)
				return false;
		}
		else if (!isdigit(*it))
			return false;
		else
			nbDigits++;
	}
	return ((nbPts == 1 || atof(str.c_str()) > 2147483647 || atof(str.c_str()) < -2147483648) && nbDigits);
}
