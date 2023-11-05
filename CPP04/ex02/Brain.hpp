#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class	Brain
{ 
	public:
	Brain();
	Brain(const Brain&);
	Brain	&operator=(const Brain&);
	~Brain();

	void	setIdea(std::string str, int nb);
	std::string	getIdea(int nb) const;

	private:
	std::string	ideas[100];
};

#endif
