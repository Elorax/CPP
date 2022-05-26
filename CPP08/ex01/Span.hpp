#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Span
{
	public:
	Span(unsigned int N);
	Span(const Span&);
	Span	&operator=(const Span&);
	~Span();
	void	addNumber(int nb);
	unsigned int	shortestSpan() const;
	unsigned int longestSpan() const;
	class	NotEnoughNumbersException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return("Exception : Not enough numbers");
		}
	};

	class	TooManyNumbersException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return("Exception : Too many numbers");
		}
	};
	
	template <class InputIterator>
	void	addRange(InputIterator first, InputIterator last)
	{
		if (static_cast<unsigned int>(std::distance(first, last)) > this->_sizeMax - this->_vec.size())
			throw TooManyNumbersException();
		this->_vec.insert(this->_vec.end(), first, last);
	}

	private:
	unsigned int _sizeMax;
	std::vector<int>	_vec;
};

#endif
