#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Animal
{
	public:
	Animal();
	Animal(const Animal&);
	Animal	&operator=(const Animal&);
	virtual	~Animal();
	string	getType() const;
	string	getIdea(int nb) const;
	void	setIdea(string str, int nb);

	virtual void	makeSound() const;

	protected:
	string	_type;
	Brain	*brain;
};

#endif
