/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiersoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:21:42 by abiersoh          #+#    #+#             */
/*   Updated: 2022/05/25 16:17:34 by abiersoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctype.h>
#include <limits>
#include <cmath>

bool	isChar(std::string str)
{
	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'' && isprint(str[1]))
		return true;
	if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return true;
	return false;
}

bool	isInt(std::string str)
{
	std::string::iterator it = str.begin();
	if (str[0] == '+' || str[0] == '-')
		it++;
	for (; isdigit(*it) && it < str.end(); it++);
	if (it == str.end())
		return true;
	return false;
}

bool	isFloat(std::string str)
{
	int	nbPts(0);
	int	nbDigits(0);
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	std::string::iterator it = str.begin();
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
		{
			return false;
		}
		else
			nbDigits++;
	}
	return (*it == 'f' && nbPts == 1 && nbDigits);
}

bool	isDouble(std::string str)
{
	int	nbPts(0);
	int	nbDigits(0);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	std::string::iterator it = str.begin();
	if (str[0] == '+' || str[0] == '-')
		it++;
	for (; it < str.end(); it++)
	{
		
		if (*it == '.')
		{
			if (nbPts++)
				return false;
		}
		else if (!isdigit(*it))
		{
			return false;
		}
		else
			nbDigits++;
	}
	return (nbPts == 1 && nbDigits);
}


int main(int ac, char **av)
{
	if (ac != 2)
		exit(EXIT_SUCCESS);
	std::string	str(av[1]);

	if (isInt(str))
	{
//		std::cout << "INTEGER" << std::endl;
		int nb = std::stoi(str);
		if (nb < std::numeric_limits<char>::min() || nb > std::numeric_limits<char>::max())
			std::cout << "char : impossible" << std::endl;
		else if (!isprint(static_cast<char>(nb)))
			std::cout << "char : not displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
		std::cout << "int : " << nb << std::endl;
		std::cout << "float : " << static_cast<float>(nb) << std::endl;
		std::cout << "double : " << static_cast<double>(nb) << std::endl;
	}

	else if (isChar(str))
	{
//		std::cout << "CHARACTER" << std::endl;
		char c;
		c = str[str[0] == '\'' && str.size() == 3];
		std::cout << "char : '" << c << "'" << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
	}

	else if (isFloat(str))
	{
//		std::cout << "FLOAT" << std::endl;
		float f = std::stof(str);
		if (std::isnan(f) || f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
			std::cout << "char : impossible" << std::endl;
		else if (!isprint(static_cast<char>(f)))
			std::cout << "char : not displayable" << std::endl;
		else
			std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
		if (std::isnan(f) || f < static_cast<float>(std::numeric_limits<int>::min()) || f > static_cast<float>(std::numeric_limits<int>::max()))
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(f) << std::endl;
		std::cout << "float : " << f << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}

	else if (isDouble(str))
	{
//		std::cout << "DOUBLE" << std::endl;
		double d = std::stod(str);
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
			std::cout << "float : impossible" << std::endl;
		else
			std::cout << "float : " << static_cast<float>(d) << std::endl;
		std::cout << "double : " << d << std::endl;
	}

	else
		std::cout << "Incorrect input" << std::endl;
	return (0);
}
