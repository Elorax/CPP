#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog&);
	Dog	&operator=(const Dog&);
	~Dog();
	void	makeSound() const;

	string	getIdea(int nb) const;
	void	setIdea(string str, int nb);
	
	private:
	Brain	*brain;
};

#endif
