#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
//# include ".hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Cure
{
	public:
	Cure();
	Cure(const Cure&);
	Cure	&operator=(const Cure&);
	~Cure();

	protected:
	string	_name;
};

#endif
