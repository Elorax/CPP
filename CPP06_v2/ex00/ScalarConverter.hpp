#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <ctype.h>

class	ScalarConverter
{
	public:

	

	static void	convert(const std::string &str);

	private:

	static bool	isChar(const std::string &str);
	static bool	isInt(const std::string &str);
	static bool	isFloat(const std::string &str);
	static bool	isDouble(const std::string &str);
	
};


#endif
