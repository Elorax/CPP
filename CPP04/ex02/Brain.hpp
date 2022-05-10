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

	void	setIdea(string str, int nb);
	string	getIdea(int nb) const;

	private:
	string	ideas[100];
};

#endif
