#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Fixed
{
	public:
	Fixed();
	Fixed(const Fixed &toCopy);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed &operator=(Fixed const &toAssign);

	private:
	int	m_value;
	static const int	m_nbBitsFracPart = 8;

};


#endif
