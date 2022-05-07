#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

using	std::string;
using	std::cout;
using	std::endl;

class	Brain
{
	public:
	Brain();
	Brain(const Brain&);
	Brain	&operator=(const Brain&);
	~Brain();

	protected:
	string	ideas[100];
};

#endif
