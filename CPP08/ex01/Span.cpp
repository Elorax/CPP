#include "Span.hpp"
#include <limits>

Span::Span(unsigned int N): _sizeMax(N), _vec()
{

}
Span::Span(const Span& toCopy): _sizeMax(toCopy._sizeMax), _vec(toCopy._vec)
{

}

Span	&Span::operator=(const Span &toAssign)
{
	this->_sizeMax = toAssign._sizeMax;
	this->_vec = toAssign._vec;
	return (*this);
}

Span::~Span()
{

}

void	Span::addNumber(int nb)
{
	if (_vec.size() == this->_sizeMax)
		throw Span::TooManyNumbersException();
	this->_vec.push_back(nb);
}

unsigned int	Span::shortestSpan() const
{
	if (this->_vec.size() < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int>	copy(_vec);
	sort(copy.begin(), copy.end());
	std::vector<int>::iterator it = copy.begin();
	unsigned int	ret(4294967295);
	for(; it != copy.end() - 1; it++)
	{
		if (static_cast<unsigned int>(*(it + 1) - *it) < ret)
			ret = *(it + 1) - *it;
		if (ret == 0)
			return(ret);
	}
	return (ret);
}

unsigned int	Span::longestSpan() const
{
	if (this->_vec.size() < 2)
		throw Span::NotEnoughNumbersException();
	return (*std::max_element(this->_vec.begin(), this->_vec.end()) - *std::min_element(this->_vec.begin(), this->_vec.end()));
}
