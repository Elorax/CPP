#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Ice
{
	public:
	Ice();
	Ice(const Ice&);
	Ice	&operator=(const Ice&);
	~Ice();

	protected:
	string	_name;
};

#endif
