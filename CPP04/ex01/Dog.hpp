#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class	Dog: public Animal
{
	public:
	Dog();
	Dog(const Dog&);
	//Dog	&operator=(const Dog&);
	~Dog();
	void	makeSound() const;
};

#endif